#include "Labirint.h"

using namespace System::Drawing;

UINT nSR = 0, nSC = 13, nER = 22, nEC = 31;
const int nL = 32, nC = 32;
UINT bit = 0b1000'0000'0000'0000'0000'0000'0000'0000;
UINT nRow = 0, nCol = 13;
UINT* nMov = 0, * nPath = 0;

int nWBlock = 16, nHBlock = 16,
nLC = 450, nTC = 150;
//const int nL = 32;		//количество строк
//const int nC = 32;		//количество столбцов в лабиринте
////UINT* nLabMov = 0;		//Лабиринт для иммитации движения жука

UINT nLab[nL] = { 0b1111'1111'1111'1011'1111'1111'1111'1111, //1
				0b1111'1111'1111'1000'0000'0000'0001'1111, //2
				0b1100'0000'0000'0000'0111'1111'1101'1111, //3
				0b1101'1111'1111'1111'0111'1111'1101'1111, //4
				0b1101'1111'1111'1111'0000'0001'1101'1111, //5
				0b1101'1100'0000'0000'0111'1101'1111'1111, //6
				0b1101'1101'1111'1111'1111'1100'0000'0111, //7
				0b1101'1101'1111'1111'1111'1111'1111'0111, //8
				0b1101'1101'1111'1111'1100'0000'1111'0111, //9
				0b1101'1101'1111'1111'1101'1111'1111'0111, //10
				0b1111'1100'0000'0000'0001'1111'1111'0111, //11
				0b1111'1111'1011'1111'1111'1111'1000'0111, //12
				0b1100'0000'0011'1111'1111'1111'1011'1111, //13
				0b1101'1111'1011'1111'1111'1111'1011'1111, //14
				0b1101'1111'1000'0000'0011'1111'1011'1111, //15
				0b1101'1111'1111'1111'1011'1111'1111'1111, //16
				0b1100'0000'0000'0000'0011'1111'1111'1111, //17
				0b1101'1111'1111'1111'1000'0000'0000'0011, //18
				0b1111'1111'1111'1111'1011'1111'1111'1111, //19
				0b1111'1000'0000'0000'0011'1111'1011'1111, //20
				0b1111'1011'1111'0111'1111'1110'0011'1111, //21
				0b1111'1011'1111'0111'1111'1110'1111'1111, //22
				0b1111'1011'1111'0000'0000'0000'0000'0000, //23
				0b1111'1011'1111'0111'1111'1111'1111'1111, //24
				0b1100'0011'1111'0111'1111'1111'1111'1111, //25
				0b1111'1111'1111'0111'1000'0000'0011'1111, //26
				0b1111'1100'0000'0111'1011'1011'1011'1111, //27
				0b1111'1101'1111'0000'0011'1011'1011'1111, //28
				0b1111'1101'1111'1111'1111'1011'1111'1111, //29
				0b1111'1100'0001'1111'1111'1011'1111'1111, //30
				0b1111'1111'1100'0000'1111'1111'1111'1111, //31 
				0b1111'1111'1111'1111'1111'1111'1111'1111 //32
};
//mapl[nL]{ 0 },
//* nMov = 0;
//UINT nbit = 0b1000'0000'0000'0000'0000'0000'0000'0000;		//Маска стены
//int nSRow = 0; int nSCol = 13;		//Стартовая позиция жука в лабиринте
//int nERow = 22; int nECol = 31;		//Конечная позиция лабиринта
//int nRow = nSRow; int nCol = nSCol;	//Текущая позиция жука в лабиринте
//COLORS nCLRB = CL_BLACK, nColoringBug = CL_GREEN;
//COLORS nCLRT = CL_WHITE;
//enColor ColorX = nCLRB, ColorY = nCLRT;
//
//int LabirintMenu() {
//	UCHAR ch = 0;
//	do {
//		CLEAR;
//
//		cout << "    Меню Лабиринт\n\n";
//		cout << "0-Лабиринт\n";
//		//cout << "1-Лабиринт с фонарём\n";
//		cout << "1-Лабиринт пошаговый поиск маршрута\n";
//		cout << "\n\nДля выхода нажмите клаишу ESC\n";
//
//		ch = _getch();
//		switch (ch) {
//		case'0': Labirint2(); break;
//			//case'1': Labirint(); break;
//		case'1': Labirint2(true); break;
//		}
//
//	} while (ch != 27);
//	return 0;
//}

int StartMoving(System::Drawing::Graphics^ graph) {
	nMov = new (UINT[nL]);
	memset(nMov, 0, sizeof(UINT) * nL);
	nPath = new UINT[nL];
	memset(nPath, 0, sizeof(UINT) * nL);

	int res = Moving(nRow, nCol, graph, false);
	delete nMov;
	return res;
}

int Moving(char pnRow, char pnCol, System::Drawing::Graphics^ graph, const BOOL pKey) {
	int nRes = 0;

	System::Drawing::Rectangle rcBlock(0, 0, nWBlock, nHBlock);
	System::Drawing::Color clr = System::Drawing::Color::LightSteelBlue;
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(clr);

	rcBlock.Y = nTC + pnRow * nHBlock;
	rcBlock.X = nLC + nWBlock * pnCol;
	graph->FillRectangle(brush, rcBlock);

	nMov[pnRow] |= bit >> pnCol;
	nPath[pnRow] |= bit >> pnCol;
//	SetColor(CL_LIGHT_GREEN);
//	SetCursor(pnRow, pnCol * 2);
//	cout << "  ";
//
//	if (pbStep) _getch();
//
//	nMov[pnRow] |= nbit >> pnCol;
	if ((pnRow == nER) && (pnCol == nEC))return 99;

	//вниз
	if (pnRow + 1 <= nL) {
		if (!(nLab[pnRow + 1] & (bit >> pnCol)) && !(nMov[pnRow + 1] & (bit >> pnCol))) {
			nRes = Moving(pnRow + 1, pnCol, graph, pKey);
			if (nRes)return nRes;
		}
	}
	//вправо
	if (pnCol + 1 <= nC) {
		if (!(nLab[pnRow] & (bit >> (pnCol + 1))) && !(nMov[pnRow] & (bit >> (pnCol + 1)))) {
			nRes = Moving(pnRow, pnCol + 1, graph, pKey);
			if (nRes)return nRes;
		}
	}
	//вверх
	if (pnRow - 1 >= 0) {
		if (!(nLab[pnRow - 1] & (bit >> pnCol)) && !(nMov[pnRow - 1] & (bit >> pnCol))) {
			nRes = Moving(pnRow - 1, pnCol, graph, pKey);
			if (nRes)return nRes;
		}
	}
	//влево
	if (pnCol - 1 >= 0) {
		if (!(nLab[pnRow] & (bit >> (pnCol - 1))) && !(nMov[pnRow] & (bit >> (pnCol - 1)))) {
			nRes = Moving(pnRow, pnCol - 1, graph, pKey);
			if (nRes)return nRes;
		}
	}

	brush->Color = Color::DarkOrange;
	graph->FillRectangle(brush, rcBlock);
	nPath[nRow] &= ~(bit >> pnCol);
//	SetCursor(pnRow, pnCol * 2);
//	SetColor(CL_LIGHT_YELLOW, CL_LIGHT_WHITE);
//	cout << "  ";
	return 0;
}

void LabirintKeys(int pkey) {
	switch (pkey) {
	//case 27: break;
	case 37:
		if (nCol - 1 < 0 || nLab[nRow] & (bit >> (nCol - 1)))Beep(750, 300); else nCol--;
		break;
	case 38:
		if (nRow == 0 || nLab[nRow - 1] & (bit >> nCol))Beep(750, 300); else nRow--;
		break;
	case 39:
		if (nCol + 1 > nC || nLab[nRow] & (bit >> (nCol + 1)))Beep(750, 300); else nCol++;
		break;
	case 40:
		if (nRow == nL || nLab[nRow + 1] & (bit >> nCol))Beep(750, 300); else nRow++;
		break;
	}
}

MyAction LabirintDraw(System::Drawing::Graphics^ graph) {
	UINT i, j;

	System::Drawing::Rectangle rc(nLC, nTC, nWBlock * nL, nHBlock * nC);
	System::Drawing::Rectangle rcBlock(0, 0, nWBlock, nHBlock);
	System::Drawing::Color clr = System::Drawing::Color::DarkKhaki;
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(clr);

	graph->FillRectangle(brush, rc);

	for (i = 0; i < nL; i++) {
		rcBlock.Y = nTC + i * nHBlock;
		for (j = 0; j < nC; j++) {
			rcBlock.X = nLC + nWBlock * j;
			if ((i == nRow) && (j == nCol)) {
				brush->Color = Color::PaleGreen;
				graph->FillRectangle(brush, rcBlock);
			}
			else
				if ((i == nSR) && (j == nSC) || ((i == nER) && (j == nEC))) {
					brush->Color = Color::White;
					graph->FillRectangle(brush, rcBlock);
				}
				else
					if (!(nLab[i] & (bit >> j))) {
						if ((nPath != 0) && (nPath[i] & (bit >> j)))
							brush->Color = Color::LightSteelBlue;
						else
							brush->Color = Color::DarkOrange;
						graph->FillRectangle(brush, rcBlock);
					}
		}
	}

	if ((nRow == nER) && (nCol == nEC))return act_LABIRINTEXIT; else return act_LABIRINT;
}
