#include "Klasses.h"

int GetValueInt(std::string ptext) { return 0; }
string GetName(std::string ptext) { return ptext; }

////cRectangle* rectangle = 0;
////cTriangle* triangle = 0;
////cEllipse* ellipse = 0;
//
//cFigura* GetFigura(cManager& manager) {
//	int id = 0;
//	cout << "Укажите идентификатор объекта==>"; cin >> id;
//	return manager.GetFigura(id);
//}
//
//void ClassesMenu() {
//	UCHAR ch = 0;
//	cManager manager;
//	cFigura* fig1 = 0, * fig2 = 0;
//	int id = 0;
//	string sclass{}, sfile{};
//
//	do {
//		CLRSCR;
//		//ClearScreen();
//		manager.DrawGraph();
//
//		cout << "    Меню для реализации класса\n\n";
//		cout << "1-Создать объект\n";
//		cout << "2-Изменить свойства фигуры\n";
//		cout << "3-Нарисовать фигуры\n";
//		cout << "4-Модель родительского класса\n";
//		cout << "5-Соединить линией\n";
//		cout << "6-Загрузить объект\n";
//		cout << "7-Сохранить объект\n";
//		cout << "\n\nДля выхода нажмите клаишу ESC\n";
//
//		ch = _getch();
//		switch (ch) {
//		case'6':
//			cout << "Введите имя файла =>"; getline(cin, sfile);
//			if (!sfile.empty()) {
//				manager.Load(sfile);
//			} break;
//		case'7':
//			cout << "Введите имя файла =>"; getline(cin, sfile);
//			if (!sfile.empty()) {
//				manager.Save(sfile);
//			} break;
//		case'1':
//			cout << "\n1-Прямоугольник\n";
//			cout << "2-Треугольник\n";
//			cout << "3-Эллипс\n";
//			ch = _getch();
//			switch (ch) {
//			case'1':fig1 = new cRectangle(100, 200, 50, 45, RGB(255, 218, 185), RGB(255, 255, 255));
//				manager.AddFigura(fig1);
//				fig1->SetId(manager.Count());
//				//fig1->Draw();
//				//manager.DrawGraph();
//				cout << fig1->GetName() << endl;
//				break;
//			case'2':fig1 = new cTriangle(250, 300, 50, 50); // , RGB(144, 238, 144), RGB(255, 255, 255));
//				manager.AddFigura(fig1);
//				fig1->SetId(manager.Count());
//				//fig1->Draw();
//				//manager.DrawGraph();
//				cout << fig1->GetName() << endl;
//				break;
//			case'3':fig1 = new cEllipse(150, 250, 50, 40); // , RGB(221, 160, 221), RGB(255, 255, 255));
//				manager.AddFigura(fig1);
//				fig1->SetId(manager.Count());
//				//fig1->Draw();
//				//manager.DrawGraph();
//				cout << fig1->GetName() << endl;
//				break;
//			}
//			ch = 0;
//			break;
//		case'2': ParamMenu(manager); break;
//		case'3':ClearScreen();
//			cout << "1-Отобразить все фигуры\n";
//			cout << "2-Отобразить фигуру по идентифиатору\n";
//			cout << "3-Отобразить фигуру класса\n";
//			cout << "4-Отобразить соединённые фигуры\n";
//			ch = _getch();
//			CLRSCR;
//			switch (ch) {
//			case'1':
//				manager.Draw();
//				break;
//			case'2':
//				fig1 = GetFigura(manager);
//				if (fig1 == NULL) {
//					cout << "Объеккт по идентификатору не найден\n"; DELAY;
//					break;
//				}
//				fig1->Draw();
//				break;
//			case'3':
//				cout << "Введите наименование класса ==>"; cin >> sclass;
//				manager.Draw(sclass);
//				break;
//			case'4':manager.DrawGraph();
//				DELAY;
//				break;
//			}
//			DELAY;
//			break;
//		case'5': {
//			cout << "Введите идентифиатор первой фигуры => "; cin >> id;
//			fig1 = manager.GetFigura(id);
//			cout << "Введите идентифиатор второй фигуры => "; cin >> id;
//			fig2 = manager.GetFigura(id);
//			manager.AddUnion(fig1, fig2);
//			manager.DrawGraph();
//		}break;
//		case'4':
//			cFigura * fig = GetFigura(manager);
//			if (fig == 0) {
//				ClearScreen();
//				for (int i = 0; i < 16; i++) {
//					SetColor(0, i);
//					SetCursor(10, 10);
//					cout << "!!!!!!!   Уазатель = NULL. ОБЪЕКТ НЕ СОЗДАН!!!!!";
//					Sleep(350);
//				}
//				break;
//			}
//			cout << "Параметры класса от родителя\n";
//			cout << "X=" << fig->Left() << "  Y=" << fig->Top() << endl;
//			cout << "Width=" << fig->Width() << "  Height=" << fig->Height() << endl;
//			cout << "X2=" << fig->Right() << "  Y2=" << fig->Bottom() << endl;
//			cout << "BrushColor=" << hex << fig->BrushColor() << "  pencolor=" << fig->PenColor() << endl;
//
//			//CID* cid = rectangle;
//			fig->SetId(12 + 20);
//			cout << dec << "Id = " << fig->GetId() << endl;
//			cout << "Name = " << fig->GetName() << endl;
//
//			cout << "Фигура" << endl;
//			fig->cFigura::Draw();
//			fig->Draw();
//			DELAY;
//			break;
//		}
//
//	} while (ch != 27);
//}
//
//void ParamMenu(cManager& manager) {
//	UCHAR ch = 0;
//	int val = 0;
//	int bred = 0, bgreen = 0, bblue = 0;
//	cFigura* fig = 0;
//	do {
//		CLRSCR;
//
//		cout << "    Меню для изменения свойств класса\n\n";
//		cout << "1-Местоположение объекта\n";
//		cout << "2-Размеры объекта\n";
//		cout << "3-Цвета заливки объекта\n";
//		//cout << "\n\nДля выхода нажмите клаишу ESC\n";
//
//		manager.DrawGraph();
//
//		ch = _getch();
//		switch (ch) {
//		case'1':
//			fig = GetFigura(manager);
//			if (fig == NULL) {
//				cout << "Объкт по идентификатору е найден!!\n";
//				break;
//			}
//			cout << "Введите 0, если параметр не меняется!!!!\n\n";
//			cout << "Введите координату х (" << fig->X() << ") "; cin >> val;
//			if (val > 0)fig->X(val);
//			cout << "Введите координату y (" << fig->Y() << ") "; cin >> val;
//			if (val > 0)fig->Y(val);
//			//fig->Draw();
//			//DELAY;
//			break;
//		case'2':
//			fig = GetFigura(manager);
//			if (fig == NULL) {
//				cout << "Объкт по идентификатору е найден!!\n";
//				break;
//			}
//			cout << "Введите 0, если параметр не меняется!!!!\n\n";
//			cout << "Введите ширину (" << fig->Width() << ") "; cin >> val;
//			if (val > 0)fig->Width(val);
//			cout << "Введите высоту (" << fig->Height() << ") "; cin >> val;
//			if (val > 0)fig->Height(val);
//			//fig->Draw();
//			break;
//		case'3':
//			fig = GetFigura(manager);
//			if (fig == NULL) {
//				cout << "Объкт по идентификатору е найден!!\n";
//				break;
//			}
//			cout << "Введите -1, если параметр не меняется!!!!\n\n";
//			cout << hex << "Введите цвет фона (" << fig->BrushColor() << ") (red green blue) = "; cin >> val;
//			if (val != -1) {
//				bred = val;
//				cin >> bgreen >> bblue;
//				fig->BrushColor(RGB(bred, bgreen, bblue));
//			}
//			cout << "Введите цвет контура (" << fig->PenColor() << ") (red green blue) = " << dec; cin >> val;
//			if ((char)val != -1) {
//				bred = val;
//				cin >> bgreen >> bblue;
//				fig->PenColor(RGB(bred, bgreen, bblue));
//			}
//			//fig->Draw();
//			break;
//		}
//
//	} while (ch != 27);
//}