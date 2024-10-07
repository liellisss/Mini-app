#include "Recursion.h"
#include <stdlib.h>
#include "MyForm.h"
#include <string.h>

using namespace приложеньеце;
using namespace System;
using namespace System::Drawing;
using namespace System::Globalization;
using namespace System::Windows::Forms;

void DrawTextRotate(Graphics^ pgraph, String^ ptext, System::Drawing::Rectangle prect, Font^ pfont, Brush^ pbrush, float angle) {
	System::Drawing::Rectangle rect(0, 0, prect.Height, prect.Width);
	pgraph->ResetTransform();
	pgraph->RotateTransform(angle);

	pgraph->TranslateTransform(prect.Left, prect.Bottom, System::Drawing::Drawing2D::MatrixOrder::Append);
	StringFormat^ string_format = gcnew StringFormat();
	string_format->Alignment = StringAlignment::Center;
	string_format->LineAlignment = StringAlignment::Center;
	//Pen^ pen = gcnew Pen(Color::Black, 2);
	//pgraph->DrawRectangle(pen, prect);
	pgraph->DrawString(ptext, pfont, pbrush, rect, string_format);
	pgraph->ResetTransform();
}

double xNext(double xxx, int n, double An, double nSum, pstRecursion pstRec) {
	An = (n == 1) ? 1 / xxx : An * (2 * n - 3) / ((2 * n - 1) * xxx * xxx);
	nSum = nSum + An;

	pstRec[n - 1].nIdstuct = n;
	pstRec[n - 1].nЗначение = An;
	pstRec[n - 1].nНакопление = nSum;

	(pstRec + n - 1)->nЗначение = An;
	(*(pstRec + n - 1)).nЗначение = An;

	if (n < 11) return xNext(xxx, n + 1, An, nSum, pstRec);
	return nSum;
};

void MyForm::Recursion() {
	tb_Title->Text = "Использовавние рекурсии суммирования всех членов";
	tb_Title->AppendText("\r\n последовательности из 10 членов");

	float xxx, y = 0, nSum = 0, An = 0;

	Input^ idt = gcnew Input;
	idt->SetLabel("Введите начальное значение x ");
	if (idt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ sRes = idt->GetText();

		xxx = Convert::ToDouble(sRes);
		//idt->Visible = false;

		RecOut = new stRecursion[11];
		memset(RecOut, 0, sizeof(stRecursion) * 11);
		y = xNext(xxx, 1, 1, nSum, RecOut);

		String^ sItem = gcnew String("");
		NumberFormatInfo^ ifp = gcnew NumberFormatInfo;
		CultureInfo^ ifc = gcnew CultureInfo("ru-Ru");
		ifp->NumberDecimalDigits = 6;
		ifc->NumberFormat->NumberDecimalDigits = 6;

		lb_Output->Items->Add("№\tЗначение\t\tНакопленная сумма");
		for (int i = 0; i < 10; i++) {
			sItem = Convert::ToString(RecOut[i].nIdstuct);
			sItem += "\t" + RecOut[i].nЗначение.ToString("n", ifp);
			sItem += "\t\t" + RecOut[i].nНакопление.ToString("N", ifc);
			lb_Output->Items->Add(sItem);
		}
		lb_Output->Items->Add("");
		lb_Output->Items->Add("\r\rВывести конечные значения y=" + y.ToString("N", ifc) + ", x=" + xxx.ToString("N", ifc));
	}
	idt->Close();
}

void DrawGraf(Graphics^pgraph, pstRecursion pRec, int pnSizeRec, RECT pstRect) {
	if (pnSizeRec == 0 | pRec == NULL) return;

	float nMinAxisX, nMaxAxisX, nMinAxisY, nMaxAxisY;

	nMinAxisY = nMaxAxisY = pRec[0].nЗначение;
	nMinAxisX = pRec[0].nIdstuct;
	nMaxAxisX = pRec[pnSizeRec - 1].nIdstuct;
	for (int i = 1; i < pnSizeRec; i++) {
		if (nMinAxisY > pRec[i].nЗначение)nMinAxisY = pRec[i].nЗначение;
		if (nMinAxisY > pRec[i].nНакопление)nMinAxisY = pRec[i].nНакопление;

		if (nMaxAxisY < pRec[i].nЗначение)nMaxAxisY = pRec[i].nЗначение;
		if (nMaxAxisY < pRec[i].nНакопление)nMaxAxisY = pRec[i].nНакопление;
	}

	Pen^ blackPen = gcnew Pen(Color::Black, 1);
	pgraph->DrawRectangle(blackPen, pstRect.left, pstRect.top, pstRect.right - pstRect.left, pstRect.bottom - pstRect.top);

	Font^ font = gcnew Font("New Time Roman", 16);

	SolidBrush^ hbrush = gcnew SolidBrush(Color::OliveDrab);

	String^ sHeading = "График рекурентного соотношения";
	int nheadsize = sHeading->Length, nind = 100;
	int zind = ((pstRect.right - pstRect.left) - font->Size * sHeading->Length) / 2 + nind;
	pgraph->DrawString(sHeading, font, hbrush, pstRect.left + zind, pstRect.top);

	RECT rAxisX(pstRect);
	rAxisX.top += 30;
	rAxisX.left += 100;
	rAxisX.right -= 20;
	rAxisX.bottom -= 60;
	DrawAxisX(pgraph, rAxisX, nMinAxisX, pnSizeRec);
	DrawAxisY(pgraph, rAxisX, nMinAxisY, 5);

	float nPxPerval = (rAxisX.right - rAxisX.left);

	int nY = (int)(rAxisX.bottom - (pRec[0].nЗначение - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
	int nSY = (int)(rAxisX.bottom - (pRec[0].nНакопление - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
	int nPxOld = rAxisX.left;

	blackPen->Width = 4;

	for (int i = 1; i < pnSizeRec; i++) {
		float nPxStep = rAxisX.left + (i)*nPxPerval / (pnSizeRec - 1);
		int nY2 = (int)(rAxisX.bottom - (pRec[i].nЗначение - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));

		blackPen->Color = Color::DarkOrchid;
		pgraph->DrawLine(blackPen, nPxOld, nY, (int)nPxStep, nY2);
		nY = nY2;

		int nSY2 = (int)(rAxisX.bottom - (pRec[i].nНакопление - nMinAxisY) * (rAxisX.bottom - rAxisX.top) / (nMaxAxisY - nMinAxisY));
		blackPen->Color = Color::DarkMagenta;
		pgraph->DrawLine(blackPen, nPxOld, nSY, (int)nPxStep, nSY2);
		nSY = nSY2;

		nPxOld = nPxStep;
	}
}

void DrawAxisX(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec) {
	PointF p1;
	PointF p2;
	p1.X = pArea.left;
	p1.Y = pArea.bottom;

	p2.X = pArea.right;
	p2.Y = pArea.bottom;

	Pen^ pen = gcnew Pen(Color::Black, 2);
	pgraph->DrawLine(pen, p1, p2);

	Font^ font = gcnew Font("New Times Roman", 12);
	SolidBrush^ brush = gcnew SolidBrush(Color::MediumAquamarine);

	String^ saxis = gcnew String("Идентификатор значения");
	int indaxis = ((pArea.right - pArea.left) - saxis->Length) / 2;
	pgraph->DrawString(saxis, font, brush, pArea.left + indaxis, pArea.bottom + 30);

	float nPxPerVal = (pArea.right - pArea.left) / (pnMax - pnMin);

	pen->Width = 1;
	pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
	pen->Color = Color::Gray;
	for (int i = 0; i < (pnSec); i++) {
		float nPxStep = pArea.left + (i)*nPxPerVal * (pnMax - pnMin) / (pnSec - 1);
		pgraph->DrawLine(pen, nPxStep, (float)pArea.bottom + 2, nPxStep, (float)pArea.top);
		brush->Color = Color::Black;
		pgraph->DrawString(Convert::ToString(pnMin + i), font, brush, nPxStep - font->Size / 2, pArea.bottom + 4);
	}
}

void DrawAxisY(Graphics^pgraph, RECT pArea, float pnMin, float pnMax, int pnSec) {
	PointF p1;
	PointF p2;
	p1.X = pArea.left;
	p1.Y = pArea.bottom;

	p2.X = pArea.left;
	p2.Y = pArea.top;

	Pen^ pen = gcnew Pen(Color::Black, 2);
	pgraph->DrawLine(pen, p1, p2);

	float nDlt = (pnMax - pnMin) / pnSec;

	float nPxPerVal = (pArea.bottom - pArea.top) / (pnMax - pnMin);

	Font^ font = gcnew Font("New Times Roman", 12);
	SolidBrush^ brush = gcnew SolidBrush(Color::MediumAquamarine);

	String^ label = gcnew String("Значение");
	int indaxis = ((pArea.bottom - pArea.top) - label->Length) / 2;

	System::Drawing::Rectangle rect(int(pArea.left - font->Height), pArea.top, int(font->Height), int(pArea.bottom - pArea.top));

	DrawTextRotate(pgraph, label, rect, font, brush, -90);

	String^ sItem = gcnew String("");
	NumberFormatInfo^ ifp = gcnew NumberFormatInfo;
	CultureInfo^ ifc = gcnew CultureInfo("ru-Ru");
	ifp->NumberDecimalDigits = 6;
	ifc->NumberFormat->NumberDecimalDigits = 6;

	for (int i = 0; i < pnSec + 1; i++) {
		float nPxStep = pArea.bottom - (i)*nPxPerVal * (pnMax - pnMin) / pnSec;
		if (i > 0) {
			pen->Width = 1;
			pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
			pen->Color = Color::Gray;

			pgraph->DrawLine(pen, pArea.left - 3, int(nPxStep), pArea.right, int(nPxStep));
		}
		float val = (pnMin + (i * nDlt));
		brush->Color = Color::Black;
		pgraph->DrawString(val.ToString("n", ifp), font, brush, pArea.left - 100, int(nPxStep));
	}
}