#pragma once
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

void StringToChar(String^ s, std::string& os);
String^ CharToString(char* str);
char* EncodeText(char* psText);
char* DecodeText(char* psText);
int GetValueInt(std::string ptext);
string GetName(std::string ptext);


class TID {
protected:
	int nID;			//идентификатор объекта
protected:
	std::string sname;		//имя класса
public:
	TID() :nID(0), sname("") {}
	TID(int pid, string pname) :nID(pid), sname(pname) {}

	int GetId() { return nID; }
	void SetId(int pid) { nID = pid; }
	string GetName() { return sname; }
	virtual void SetName(string pname) final { sname = pname; }
};

class TFigura : public TID {
protected:
	int nx,				//левый верхний угол прямоугольника по оси х
		ny,				//левый верхний угол прямоугольника по оси y
		nwid,			//ширина фигуры
		nhei;		//высота фигуры
	int brushcolor,		//цвет кисти(заливки)
		pencolor;		//цвет пера(контура)

public:
	TFigura() :nx(0), ny(0), nwid(100), nhei(50), brushcolor(RGB(225, 150, 245)), pencolor(RGB(128, 0, 128)) {
		sname = "TFigura";
	}
	TFigura(int pnx, int pny) :nx(pnx), ny(pny) {
		nwid = 100; nhei = 50; brushcolor = RGB(225, 50, 45);
		pencolor = RGB(225, 225, 255); sname = "TFigura";
	}
	TFigura(int pnx, int pny, int pnwid, int pnhei) {
		nx = pnx; ny = pny; nwid = pnwid; nhei = pnhei; brushcolor = RGB(25, 50, 245),
			pencolor = RGB(128, 128, 128); sname = "TFigura";
	}
	TFigura(int pnx, int pny, int pid) :nx(pnx), ny(pny), TID(pid, "TFigura") {
		nwid = 100; nhei = 50; brushcolor = RGB(225, 50, 45); pencolor = RGB(255, 255, 255);
	}


	int X() { return nx; }
	void X(int px) { nx = px; }
	int Y() { return ny; }
	void Y(int py) { ny = py; }

	int Width() { return nwid; }
	void Width(int pwid) { nwid = pwid; }
	int Height() { return nhei; }
	void Height(int phei) { nhei = phei; }

	int BrushColor() { return brushcolor; }
	void BrushColor(int bcol) { brushcolor = bcol; }
	int PenColor() { return pencolor; }
	void PenColor(int pcol) { pencolor = pcol; }

	int Left() { return nx; }
	int Top() { return ny; }
	int Right() { return nx + nwid; }
	int Bottom() { return ny + nhei; }

	int MiddleX() { return nx + nwid / 2; }
	int MiddleY() { return ny + nhei / 2; }

	void Move(int px, int py, bool anime = false) {
		if (anime) {
			int dx = (px - nx),
				dy = (py - ny);
			for (int i = 1; i <= 30; i++) {
				nx = nx + dx * i / 30;
				ny = ny + dy * i / 30;
				Sleep(100 / i);
			}
		}
		else {
			nx = px;
			ny = py;
		}
	}

	virtual void Save(string psFile) {			//функция записи состояния объекта в файле
		ofstream fout(psFile, ios::app);
		if (!fout) {						//если файл открыт с ошибкой или не смог открыться, то выход из метода 
			fout << sname << endl;
			fout << "id=" << nID << endl;
			fout << "x=" << nx << endl;
			fout << "y=" << ny << endl;
			fout << "width=" << nwid << endl;
			fout << "high=" << nhei << endl;
			fout << "bcolor=" << brushcolor << endl;
			fout << "pcolor=" << pencolor << endl;
			fout << "end\n";
			fout.close();
		}
	}

	virtual int Load(string sfile, int cursor) {
		ifstream fin(sfile);
		fin.seekg(cursor, ios::beg);
		if (fin) {
			string text;
			getline(fin, text); nID = GetValueInt(text);
			getline(fin, text); nx = GetValueInt(text);
			getline(fin, text); ny = GetValueInt(text);
			getline(fin, text); nwid = GetValueInt(text);
			getline(fin, text); nhei = GetValueInt(text);
			getline(fin, text); brushcolor = GetValueInt(text);
			getline(fin, text); pencolor = GetValueInt(text);
			getline(fin, text);
			return (int)fin.tellg();
		}
		return 0;
	}
	void SetParam(string ptext) {
	
	}
	virtual void Draw(System::Drawing::Graphics^ graph) = 0;
};

	//virtual void Draw() { "Это фигура !**!*!*!**!*!*!*!!*"; };

class TRectangle : public TFigura {
public:
	TRectangle() { TID::sname = "TRectangle"; }
	TRectangle(int pnx, int pny) :TFigura(pnx, pny) { TID::sname = "TRectangle"; }
	TRectangle(int pnx, int pny, int pnwid, int pnhei) :TFigura(pnx, pny, pnwid, pnhei) { TID::sname = "TRectangle"; }
	TRectangle(int pnx, int pny, int pid) :TFigura(pnx, pny, pid) { TID::sname = "TRectangle"; }

	void Draw(System::Drawing::Graphics^ graph) {
		System::Drawing::Color bclr = System::Drawing::Color::FromArgb(255, GetRValue(brushcolor), GetGValue(brushcolor), GetBValue(brushcolor));
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bclr);
		System::Drawing::Pen^ pen = gcnew Pen(Color::PowderBlue);
		System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
		System::Drawing::Rectangle rc(nx, ny, nwid, nhei);

		graph->FillRectangle(brush, rc);
		graph->DrawRectangle(pen, rc);

		int clr = ~brushcolor;
		brush->Color = Color::FromArgb(GetRValue(clr), GetGValue(clr), GetBValue(clr));
		String^ text = Convert::ToString(nID);

		graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
	}
};

class TTriangle : public TFigura {
public:
	TTriangle() { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 55, 255); TID::sname = "TTriangle"; }
	TTriangle(int pnx, int pny) :TFigura(pnx, pny) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 55, 255); TID::sname = "TTriangle"; }
	TTriangle(int pnx, int pny, int pnwid, int pnhei):TFigura(pnx, pny, pnwid, pnhei){ brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 55, 255); TID::sname = "TTriangle"; }
	TTriangle(int pnx, int pny, int pid) :TFigura(pnx, pny, pid) { TID:sname = "TTriangle"; brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 55, 255); }

	void Draw(System::Drawing::Graphics^ graph){
		System::Drawing::Color bclr = System::Drawing::Color::FromArgb(255, GetRValue(brushcolor), GetGValue(brushcolor), GetBValue(brushcolor));
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bclr);
		System::Drawing::Pen^ pen = gcnew Pen(Color::PowderBlue);
		System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
		//System::Drawing::Rectangle rc(nx, ny, nwid, nhei);

		PointF pt1 = PointF((float)nx + nwid / 2, (float)ny);
		PointF pt2 = PointF((float)nx + nwid, (float)ny + nhei);
		PointF pt3 = PointF((float)nx, (float)ny + nhei);
		PointF pt4 = PointF((float)pt1.X, (float)pt1.Y);
		cli::array<PointF, 1 >^ pt = { pt1, pt2, pt3, pt4 };

		graph->FillPolygon(brush, pt);
		graph->DrawPolygon(pen, pt);

		int clr = ~brushcolor;
		brush->Color = Color::FromArgb(GetRValue(clr), GetGValue(clr), GetBValue(clr));
		String^ text = Convert::ToString(nID);

		graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
	}
};

class TEllipse : public TFigura {
public:
	TEllipse(){ brushcolor = RGB(55, 25, 255); pencolor = RGB(255, 255, 255); TID::sname = "TEllipse"; }
	TEllipse(int pnx, int pny):TFigura(pnx, pny) { brushcolor = RGB(55, 25, 255); pencolor = RGB(255, 255, 255); TID::sname = "TEllipse"; }
	TEllipse(int pnx, int pny, int pnwid, int pnhei) :TFigura(pnx, pny, pnwid, pnhei) { brushcolor = RGB(55, 25, 255); pencolor = RGB(255, 255, 255); TID::sname = "TEllipse"; }
	TEllipse(int pnx, int pny, int pid) :TFigura(pnx, pny, pid) { TID::sname = "TEllipse"; brushcolor = RGB(55, 25, 255); pencolor = RGB(255, 255, 255); }

	void Draw(System::Drawing::Graphics^ graph){
		System::Drawing::Color bclr = System::Drawing::Color::FromArgb(255, GetRValue(brushcolor), GetGValue(brushcolor), GetBValue(brushcolor));
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bclr);
		System::Drawing::Pen^ pen = gcnew Pen(Color::PowderBlue);
		System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
		System::Drawing::Rectangle rc(nx, ny, nwid, nhei);

		graph->FillEllipse(brush, rc);
		graph->DrawEllipse(pen, rc);

		int clr = ~brushcolor;
		brush->Color = Color::FromArgb(GetRValue(clr), GetGValue(clr), GetBValue(clr));
		String^ text = Convert::ToString(nID);

		graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
	}
};

class TUnit {		//соединитель объектов cFigura
	TFigura* fig1, * fig2;		//фигуры первая и вторая
	int color,					//цвет линнии
		width;					//ширина линии в пикселях
public:
	TUnit(TFigura* pf1 = 0, TFigura* pf2 = 0) :fig1(pf1), fig2(pf2) { color = RGB(255, 255, 0); width = 5; }
	~TUnit() { fig1 = 0; fig2 = 0; }

	void SetFigura1(TFigura* pfig = 0) { fig1 = pfig; }
	void SetFigura2(TFigura* pfig = 0) { fig2 = pfig; }
	void Add(TFigura* pf1, TFigura* pf2) { fig1 = pf1; fig2 = pf2; }
	void Color(int color) { this->color = color; }
	void Width(int width) { this->width = width; }
	TFigura* GetFigura1() { return fig1; }
	TFigura* GetFigura2() { return fig2; }
	int Color() { return color; }
	int Width() { return width; }

	void Draw(System::Drawing::Graphics^ graph){
		
	}
};

class TManager {
private:
	TFigura** ofigura;		// динамический массив объектов (прямоуг , треуг, овалов)
	int ncount;				//количество объектов в ofigury
	TUnit** ounit;		//это динамический массив объектов cUnion
	int nunit;				//кол-во линий соединения
public:
	TManager() :ofigura(NULL), ncount(0), ounit(NULL), nunit(0) {}
	~TManager() {
		for (int i = 0; i < ncount; i++) {
			delete GetFigura(i);
		}
		if (ofigura != NULL)delete ofigura;

		if (ounit != NULL) {
			TUnit* obj = 0;
			for (int i = 0; i < nunit; i++) {
				obj = ounit[i];
				delete obj;
			}
			delete ounit;
		}
	}

	int AddFigura(TFigura* pFigura) {
		if (pFigura == NULL)return -1;
		ofigura = (TFigura**)realloc(ofigura, sizeof(TFigura*) * (++ncount));
		ofigura[ncount - 1] = pFigura;
		return ncount - 1;
	}

	int AddUnit(TUnit* pUnit) {
		if (pUnit == NULL)return -1;
		ounit = (TUnit**)realloc(ounit, sizeof(TUnit*) * (++nunit));
		ounit[nunit - 1] = pUnit;
		return nunit - 1;
	}

	int InsertFigura(TFigura* pFigura, int pindex) {
		if (pFigura == NULL)return -1;
		if (pindex < 0)pindex = 0;
		if (pindex >= ncount)return AddFigura(pFigura);

		ofigura = (TFigura**)realloc(ofigura, sizeof(TFigura*) * (++ncount));
		for (int i = ncount - 2; i >= pindex; i--)
			ofigura[i + 1] = ofigura[i];

		ofigura[pindex] = pFigura;
		return pindex;
	}

	int Size() { return ncount; }

	void Save(string pfile) {
		TFigura* fig = 0;
		ofstream fout1(pfile); fout1.close();
		for (int i = 0; i < ncount; i++) {
			fig = ofigura[i];
			if (fig) {
				fig->Save(pfile);
			}
		}

		ofstream fout(pfile, ios::app);
		for (int i = 0; i < ncount; i++) {
			TUnit* unit = ounit[i];
			if (fout) {
				fout << "TUnit" << endl;
				fout << "id1=" << unit->GetFigura1()->GetId() << endl;
				fout << "id2=" << unit->GetFigura2()->GetId() << endl;
				fout << "end\n";
			}
		}
		fout.close();
	}

	void Load(string pfile) {
		if (pfile.empty())return;
		ifstream fin;
		int cur = 0;
		string stext;
		while (fin) {
			fin.open(pfile);
			fin.seekg(cur);
			getline(fin, stext);
			cur = (int)fin.tellg();
			fin.close();
			if (stext.compare("TRectangle") == 0) {
				TRectangle* fig = new TRectangle;
				cur = fig->Load(pfile, cur);
				AddFigura(fig);
			}
			else
				if (stext.compare("TTriangle") == 0) {
					TTriangle* fig = new TTriangle;
					cur = fig->Load(pfile, cur);
					AddFigura(fig);
				}
				else
					if (stext.compare("TEllipse") == 0) {
						TEllipse* fig = new TEllipse;
						cur = fig->Load(pfile, cur);
						AddFigura(fig);
					}
					else if (stext.compare("TUnit") == 0) {
						fin.open(pfile);
						fin.seekg(cur);

						TUnit* unit = new TUnit;
						TFigura* fig1 = 0, * fig2 = 0;
						string text; int nID;
						getline(fin, text); nID = GetValueInt(text);
						fig1 = GetFiguraId(nID);
						getline(fin, text); nID = GetValueInt(text);
						fig2 = GetFiguraId(nID);
						unit->Add(fig1, fig2);
						AddUnit(unit);
						getline(fin, text);
						cur = (int)fin.tellg();
						fin.close();
					}
		}
		fin.close();
	}


	TFigura* GetFigura(int pIndex) {
		if ((pIndex < 0) || (pIndex >= ncount)) return NULL;
		return ofigura[pIndex];
	}

	TFigura* GetFiguraId(int pid) {
		for (int i = 0; i < ncount; i++) {
			if (ofigura[i]->GetId() == pid)return ofigura[i];
		}
		return NULL;
	}

	void Draw(System::Drawing::Graphics^ graph) {
		for (int i = 0; i < nunit; i++)ounit[i]->Draw(graph);
		for (int i = 0; i < ncount; i++)ofigura[i]->Draw(graph);
	}

	void Draw(string pcname, System::Drawing::Graphics^ graph) {
		for (int i = 0; i < ncount; i++) {
			if (ofigura[i]->GetName().compare(pcname) == 0)ofigura[i]->Draw(graph);
		}
	}
};