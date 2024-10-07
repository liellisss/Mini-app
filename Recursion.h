#pragma once
#include <Windows.h>
#include <string>
//#include "Header.h"
//#include <wingdi.h>

using namespace System::Drawing;
using namespace System;

typedef
struct _stRecursion {
	int nIdstuct;
	double nЗначение,
		nНакопление;
	_stRecursion() {
		nIdstuct = 0;
		nЗначение = 0;
		nНакопление = 0;
	}
} stRecursion, * pstRecursion;

//	int nCount;					//количество элементов структур в наборк данных
//	pstRecItem setRec;			//массив данных
//	enModel model = mod_n_An_Y; //модель даннных
//
//	_stRecursion() :nCount(0), setRec(0) {}
//	_stRecursion(int pCount) { setRec = new stRecItem[pCount]; }
//	~_stRecursion() { delete[]setRec; }
//
//	int AddItem(int pId, double pV1, double pV2) {
//		nCount++;
//		setRec = (pstRecItem)realloc(setRec, sizeof(stRecItem) * nCount);
//
//		setRec[nCount - 1].nIdSet = pId;
//		setRec[nCount - 1].nValue1 = pV1;
//		setRec[nCount - 1].nValue2 = pV2;
//		return nCount;
//	}
//
//	void Clear() {
//		nCount = 0;
//		if (setRec != 0) { free(setRec); setRec = NULL; }
//	}
//
//	pair <double, double> minimax(enModel pmod) {
//		if (nCount == 0)return pair<double, double>(0, 0);
//		double min = 0, max = 0;
//
//		switch (pmod) {		//данные по оси Х или У
//		case mod_X: {	//диапазон по оси Х
//			switch (model) {
//			case mod_An_Y: {
//				min = max = setRec[0].nValue1;
//				for (int i = 1; i < nCount; i++) {
//					if (min > setRec[i].nValue1)min = setRec[i].nValue1;
//					if (max < setRec[i].nValue1)max = setRec[i].nValue1;
//				}
//			}break;
//			default: {
//				min = max = setRec[0].nIdSet;
//				for (int i = 1; i < nCount; i++) {
//					if (min > setRec[i].nIdSet)min = setRec[i].nIdSet;
//					if (max < setRec[i].nIdSet)max = setRec[i].nIdSet;
//				}
//			}
//			}
//		}break;
//		case mod_Y: {	//диапазон по оси У
//			switch (model) {
//			case mod_n_Y:
//			case mod_An_Y: {
//				min = max = setRec[0].nValue2;
//				for (int i = 1; i < nCount; i++) {
//					if (min > setRec[i].nValue2)min = setRec[i].nValue2;
//					if (max < setRec[i].nValue2)max = setRec[i].nValue2;
//				}
//			}break;
//			case mod_n_An: {
//				min = max = setRec[0].nValue1;
//				for (int i = 1; i < nCount; i++) {
//					if (min > setRec[i].nValue1)min = setRec[i].nValue1;
//					if (max < setRec[i].nValue1)max = setRec[i].nValue1;
//				}
//			}break;
//			case mod_n_An_Y: {
//				min = max = setRec[0].nValue1;
//				for (int i = 1; i < nCount; i++) {
//					if (min > setRec[i].nValue1)min = setRec[i].nValue1;
//					if (max < setRec[i].nValue1)max = setRec[i].nValue1;
//					if (min > setRec[i].nValue2)min = setRec[i].nValue2;
//					if (max < setRec[i].nValue2)max = setRec[i].nValue2;
//				}
//			}break;
//			}
//		}break;
//		}
//		return pair <double, double>(min, max);
//	}
//
//	double X(int pIndex) {
//		if (nCount == 0 || pIndex >= nCount) return 0;
//
//		switch (model) {
//		case mod_An_Y: {
//			return setRec[pIndex].nValue1;
//		}break;
//		default: {
//			return setRec[pIndex].nIdSet;
//		}
//		}
//		return 0;
//	}
//
//	pair <double, double> Y(int pIndex) {
//		if (nCount == 0 || pIndex >= nCount) return pair <double, double>(0, 0);
//
//		switch (model) {
//		case mod_n_An_Y: {			//данные н-номер метки, Ан-член ряда, У-накопленное значение
//			return pair <double, double>(setRec[pIndex].nValue1, setRec[pIndex].nValue2);
//		}break;
//		case mod_n_An: {			//данные н-номер метки, Ан-член ряда
//			return pair <double, double>(setRec[pIndex].nValue1, 0);
//		}break;
//		case mod_n_Y:				//данные н-номер метки, У-накопленное значение
//		case mod_An_Y: {			//Ан-член ряда, У-накопленное значение 
//			return pair <double, double>(setRec[pIndex].nValue2, 0);
//		}break;
//		}
//	}
//
//	int SetCount(int pnCount) {
//		Clear();
//		nCount = pnCount;
//		setRec = new stRecItem[pnCount];
//		return nCount;
//	}
//
//}stRecursion, * pstRecursion;
//
//typedef struct stRect {
//	UINT nLeft,	 //левая
//		nTop,		//верхняя координата
//		nWidth,		//ширина
//		nHeight;		//высота
//	stRect() :nLeft(0), nTop(0), nWidth(0), nHeight(0) {}
//	stRect(UINT pLeft, UINT pTop) :nWidth(0), nHeight(0), nLeft(pLeft), nTop(pTop) {}
//	stRect(UINT pLeft, UINT pTop, UINT pWid, UINT pHei) :nLeft(pLeft), nTop(pTop), nWidth(pWid), nHeight(pHei) {}
//
//	UINT nBottom() { return nTop + nHeight; }		//координата низа прямоугольника
//	UINT nRight() { return nLeft + nWidth; }		//координата правой стороны прямоугольника
//
//}stRECT, * pstRECT;

static CURSORINFO pci;

//void RecTable(bool pdelay = true);
//void RecGraf();
void DrawAxisX(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec = 10);
void DrawAxisY(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec = 4);
void DrawGraf(Graphics^ pgraph, pstRecursion pRec, int pnSizeRec, RECT pstRect);
void DrawTextRotate(Graphics^ pgraph, String^ ptext, System::Drawing::Rectangle prect, Font^ pfont, Brush^ pbrush, float angle);

//extern stRecursion RecData;
