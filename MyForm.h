#pragma once
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include "Input.h"
#include "Classes.h"
#include "Header.h"
#include "Recursion.h"
#include "Labirint.h"
#include "Klasses.h"

namespace приложеньеце {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyAction onaction;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьОбъектToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ прямоугольникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ треугольникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ эллипсToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКартуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьКартуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ соединениеОбъектовЛиниямиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ включитьРежимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выключитьРежимToolStripMenuItem;
	public:
		static stRecursion* RecOut;
		static TManager* mng = 0;
		static int mx, my, dx, dy;
	private: System::Windows::Forms::ToolStripMenuItem^ методПрямогоВыбораToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ методПузырькаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ быстраяСортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обратнаяСортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота3ToolStripMenuItem;


	public:
		static TFigura* ActiveClass = 0;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: void Recursion();

	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::ToolStripMenuItem^ маскаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ семестрToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведенияОПрограмистеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ рекурсияИГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шифрованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ классыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзПриложеньецеToolStripMenuItem;
	private: System::Windows::Forms::Panel^ p_Tite;
	private: System::Windows::Forms::TextBox^ tb_Title;
	private: System::Windows::Forms::Panel^ p_Output;
	private: System::Windows::Forms::ListBox^ lb_Output;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->маскаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->семестрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведенияОПрограмистеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекурсияИГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->методПрямогоВыбораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->методПузырькаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->быстраяСортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обратнаяСортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шифрованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->классыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьОбъектToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->прямоугольникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->треугольникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->эллипсToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКартуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьКартуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->соединениеОбъектовЛиниямиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->включитьРежимToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выключитьРежимToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзПриложеньецеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->p_Tite = (gcnew System::Windows::Forms::Panel());
			this->tb_Title = (gcnew System::Windows::Forms::TextBox());
			this->p_Output = (gcnew System::Windows::Forms::Panel());
			this->lb_Output = (gcnew System::Windows::Forms::ListBox());
			this->menu->SuspendLayout();
			this->p_Tite->SuspendLayout();
			this->p_Output->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->маскаToolStripMenuItem,
					this->семестрToolStripMenuItem, this->лабиринтToolStripMenuItem, this->рекурсияИГрафикToolStripMenuItem, this->сортировкаToolStripMenuItem,
					this->шифрованиеToolStripMenuItem, this->классыToolStripMenuItem, this->выходИзПриложеньецеToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(781, 24);
			this->menu->TabIndex = 1;
			this->menu->Text = L"menumain";
			// 
			// маскаToolStripMenuItem
			// 
			this->маскаToolStripMenuItem->Name = L"маскаToolStripMenuItem";
			this->маскаToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->маскаToolStripMenuItem->Text = L"Маска";
			this->маскаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::маскаToolStripMenuItem_Click);
			// 
			// семестрToolStripMenuItem
			// 
			this->семестрToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сведенияОПрограмистеToolStripMenuItem,
					this->лабораторнаяРабота1ToolStripMenuItem, this->лабораторнаяРабота2ToolStripMenuItem, this->лабораторнаяРабота3ToolStripMenuItem
			});
			this->семестрToolStripMenuItem->Name = L"семестрToolStripMenuItem";
			this->семестрToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->семестрToolStripMenuItem->Text = L"1 семестр";
			// 
			// сведенияОПрограмистеToolStripMenuItem
			// 
			this->сведенияОПрограмистеToolStripMenuItem->Name = L"сведенияОПрограмистеToolStripMenuItem";
			this->сведенияОПрограмистеToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->сведенияОПрограмистеToolStripMenuItem->Text = L"Сведения о програмисте";
			this->сведенияОПрограмистеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сведенияОПрограмистеToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота1ToolStripMenuItem
			// 
			this->лабораторнаяРабота1ToolStripMenuItem->Name = L"лабораторнаяРабота1ToolStripMenuItem";
			this->лабораторнаяРабота1ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->лабораторнаяРабота1ToolStripMenuItem->Text = L"Лабораторная работа №1";
			this->лабораторнаяРабота1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота1ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота2ToolStripMenuItem
			// 
			this->лабораторнаяРабота2ToolStripMenuItem->Name = L"лабораторнаяРабота2ToolStripMenuItem";
			this->лабораторнаяРабота2ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->лабораторнаяРабота2ToolStripMenuItem->Text = L"Лабораторная работа №2";
			this->лабораторнаяРабота2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота2ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота3ToolStripMenuItem
			// 
			this->лабораторнаяРабота3ToolStripMenuItem->Name = L"лабораторнаяРабота3ToolStripMenuItem";
			this->лабораторнаяРабота3ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->лабораторнаяРабота3ToolStripMenuItem->Text = L"Лабораторная работа №3";
			this->лабораторнаяРабота3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота3ToolStripMenuItem_Click);
			// 
			// лабиринтToolStripMenuItem
			// 
			this->лабиринтToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->лабиринтToolStripMenuItem1 });
			this->лабиринтToolStripMenuItem->Name = L"лабиринтToolStripMenuItem";
			this->лабиринтToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->лабиринтToolStripMenuItem->Text = L"Лабиринт";
			// 
			// лабиринтToolStripMenuItem1
			// 
			this->лабиринтToolStripMenuItem1->Name = L"лабиринтToolStripMenuItem1";
			this->лабиринтToolStripMenuItem1->Size = System::Drawing::Size(253, 22);
			this->лабиринтToolStripMenuItem1->Text = L"Лабиринт с поиском маршрута";
			this->лабиринтToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::лабиринтToolStripMenuItem1_Click);
			// 
			// рекурсияИГрафикToolStripMenuItem
			// 
			this->рекурсияИГрафикToolStripMenuItem->Name = L"рекурсияИГрафикToolStripMenuItem";
			this->рекурсияИГрафикToolStripMenuItem->Size = System::Drawing::Size(130, 20);
			this->рекурсияИГрафикToolStripMenuItem->Text = L"Рекурсия и график";
			this->рекурсияИГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::рекурсияИГрафикToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->методПрямогоВыбораToolStripMenuItem,
					this->методПузырькаToolStripMenuItem, this->быстраяСортировкаToolStripMenuItem, this->обратнаяСортировкаToolStripMenuItem
			});
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->сортировкаToolStripMenuItem->Text = L"Сортировка";
			// 
			// методПрямогоВыбораToolStripMenuItem
			// 
			this->методПрямогоВыбораToolStripMenuItem->Name = L"методПрямогоВыбораToolStripMenuItem";
			this->методПрямогоВыбораToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->методПрямогоВыбораToolStripMenuItem->Text = L"Метод прямого выбора";
			this->методПрямогоВыбораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::методПрямогоВыбораToolStripMenuItem_Click);
			// 
			// методПузырькаToolStripMenuItem
			// 
			this->методПузырькаToolStripMenuItem->Name = L"методПузырькаToolStripMenuItem";
			this->методПузырькаToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->методПузырькаToolStripMenuItem->Text = L"Метод пузырька";
			this->методПузырькаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::методПузырькаToolStripMenuItem_Click);
			// 
			// быстраяСортировкаToolStripMenuItem
			// 
			this->быстраяСортировкаToolStripMenuItem->Name = L"быстраяСортировкаToolStripMenuItem";
			this->быстраяСортировкаToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->быстраяСортировкаToolStripMenuItem->Text = L"Быстрая сортировка";
			this->быстраяСортировкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::быстраяСортировкаToolStripMenuItem_Click);
			// 
			// обратнаяСортировкаToolStripMenuItem
			// 
			this->обратнаяСортировкаToolStripMenuItem->Name = L"обратнаяСортировкаToolStripMenuItem";
			this->обратнаяСортировкаToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->обратнаяСортировкаToolStripMenuItem->Text = L"Обратная сортировка";
			this->обратнаяСортировкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обратнаяСортировкаToolStripMenuItem_Click);
			// 
			// шифрованиеToolStripMenuItem
			// 
			this->шифрованиеToolStripMenuItem->Name = L"шифрованиеToolStripMenuItem";
			this->шифрованиеToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->шифрованиеToolStripMenuItem->Text = L"Шифрование";
			this->шифрованиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шифрованиеToolStripMenuItem_Click);
			// 
			// классыToolStripMenuItem
			// 
			this->классыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->создатьОбъектToolStripMenuItem,
					this->обновитьToolStripMenuItem, this->сохранитьКартуToolStripMenuItem, this->загрузитьКартуToolStripMenuItem, this->соединениеОбъектовЛиниямиToolStripMenuItem
			});
			this->классыToolStripMenuItem->Name = L"классыToolStripMenuItem";
			this->классыToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->классыToolStripMenuItem->Text = L"Классы";
			this->классыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::классыToolStripMenuItem_Click);
			// 
			// создатьОбъектToolStripMenuItem
			// 
			this->создатьОбъектToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->прямоугольникToolStripMenuItem,
					this->треугольникToolStripMenuItem, this->эллипсToolStripMenuItem
			});
			this->создатьОбъектToolStripMenuItem->Name = L"создатьОбъектToolStripMenuItem";
			this->создатьОбъектToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->создатьОбъектToolStripMenuItem->Text = L"Создать объект";
			// 
			// прямоугольникToolStripMenuItem
			// 
			this->прямоугольникToolStripMenuItem->Name = L"прямоугольникToolStripMenuItem";
			this->прямоугольникToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->прямоугольникToolStripMenuItem->Text = L"Прямоугольник";
			this->прямоугольникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::прямоугольникToolStripMenuItem_Click);
			// 
			// треугольникToolStripMenuItem
			// 
			this->треугольникToolStripMenuItem->Name = L"треугольникToolStripMenuItem";
			this->треугольникToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->треугольникToolStripMenuItem->Text = L"Треугольник";
			this->треугольникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::треугольникToolStripMenuItem_Click);
			// 
			// эллипсToolStripMenuItem
			// 
			this->эллипсToolStripMenuItem->Name = L"эллипсToolStripMenuItem";
			this->эллипсToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->эллипсToolStripMenuItem->Text = L"Эллипс";
			this->эллипсToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::эллипсToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			// 
			// сохранитьКартуToolStripMenuItem
			// 
			this->сохранитьКартуToolStripMenuItem->Name = L"сохранитьКартуToolStripMenuItem";
			this->сохранитьКартуToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->сохранитьКартуToolStripMenuItem->Text = L"Сохранить карту";
			// 
			// загрузитьКартуToolStripMenuItem
			// 
			this->загрузитьКартуToolStripMenuItem->Name = L"загрузитьКартуToolStripMenuItem";
			this->загрузитьКартуToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->загрузитьКартуToolStripMenuItem->Text = L"Загрузить карту";
			// 
			// соединениеОбъектовЛиниямиToolStripMenuItem
			// 
			this->соединениеОбъектовЛиниямиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->включитьРежимToolStripMenuItem,
					this->выключитьРежимToolStripMenuItem
			});
			this->соединениеОбъектовЛиниямиToolStripMenuItem->Name = L"соединениеОбъектовЛиниямиToolStripMenuItem";
			this->соединениеОбъектовЛиниямиToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->соединениеОбъектовЛиниямиToolStripMenuItem->Text = L"Соединение объектов линиями";
			// 
			// включитьРежимToolStripMenuItem
			// 
			this->включитьРежимToolStripMenuItem->Name = L"включитьРежимToolStripMenuItem";
			this->включитьРежимToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->включитьРежимToolStripMenuItem->Text = L"Включить режим";
			// 
			// выключитьРежимToolStripMenuItem
			// 
			this->выключитьРежимToolStripMenuItem->Name = L"выключитьРежимToolStripMenuItem";
			this->выключитьРежимToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->выключитьРежимToolStripMenuItem->Text = L"Выключить режим";
			// 
			// выходИзПриложеньецеToolStripMenuItem
			// 
			this->выходИзПриложеньецеToolStripMenuItem->Name = L"выходИзПриложеньецеToolStripMenuItem";
			this->выходИзПриложеньецеToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->выходИзПриложеньецеToolStripMenuItem->Size = System::Drawing::Size(167, 20);
			this->выходИзПриложеньецеToolStripMenuItem->Text = L"Выход из приложеньеце";
			this->выходИзПриложеньецеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходИзПриложеньецеToolStripMenuItem_Click);
			// 
			// p_Tite
			// 
			this->p_Tite->Controls->Add(this->tb_Title);
			this->p_Tite->Dock = System::Windows::Forms::DockStyle::Top;
			this->p_Tite->Location = System::Drawing::Point(0, 24);
			this->p_Tite->Name = L"p_Tite";
			this->p_Tite->Size = System::Drawing::Size(781, 76);
			this->p_Tite->TabIndex = 2;
			// 
			// tb_Title
			// 
			this->tb_Title->BackColor = System::Drawing::Color::AntiqueWhite;
			this->tb_Title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tb_Title->Enabled = false;
			this->tb_Title->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Title->Location = System::Drawing::Point(0, 0);
			this->tb_Title->Multiline = true;
			this->tb_Title->Name = L"tb_Title";
			this->tb_Title->Size = System::Drawing::Size(781, 76);
			this->tb_Title->TabIndex = 0;
			this->tb_Title->Text = L"Здесь пишем задание и описание задачи";
			// 
			// p_Output
			// 
			this->p_Output->Controls->Add(this->lb_Output);
			this->p_Output->Dock = System::Windows::Forms::DockStyle::Left;
			this->p_Output->Location = System::Drawing::Point(0, 100);
			this->p_Output->Name = L"p_Output";
			this->p_Output->Size = System::Drawing::Size(400, 333);
			this->p_Output->TabIndex = 3;
			// 
			// lb_Output
			// 
			this->lb_Output->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lb_Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_Output->FormattingEnabled = true;
			this->lb_Output->ItemHeight = 18;
			this->lb_Output->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"dfgfgdf", L"gfgsgsg", L"sfgsgsg" });
			this->lb_Output->Location = System::Drawing::Point(0, 0);
			this->lb_Output->Name = L"lb_Output";
			this->lb_Output->Size = System::Drawing::Size(400, 333);
			this->lb_Output->TabIndex = 0;
			this->lb_Output->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			this->lb_Output->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::lb_Output_KeyDown);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 433);
			this->Controls->Add(this->p_Output);
			this->Controls->Add(this->p_Tite);
			this->Controls->Add(this->menu);
			this->MainMenuStrip = this->menu;
			this->Name = L"MyForm";
			this->Text = L"Приложение Лисовено Е.П.";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyFom_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->p_Tite->ResumeLayout(false);
			this->p_Tite->PerformLayout();
			this->p_Output->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выходИзПриложеньецеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   public: void ClearToNewTask() {
		   tb_Title->Text = "Выберите пункт меню для решения задачи";
		   tb_Title->Enabled = false;
		   lb_Output->Items->Clear();
		   p_Output->Visible = true;
		   onaction = act_NONE;
	   }
private: System::Void MyFom_Load(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
}

private: System::Void маскаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
	tb_Title->Text = "В массиве случайных 2-х байтных чисел, найти те, которые удовлетворяют маске\n\n";

	Input^ f_input = gcnew Input;
	if (f_input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ sRes = f_input->GetText();
		if (sRes == "")return;

		int nRes = Convert::ToInt32(sRes);
		int nCount = 0;
		int nNumber;
		for (int i = 0; i < 20; i++) {
			nNumber = rand();
			if ((nNumber & nRes) == nRes) {
				lb_Output->Items->Add(nNumber);
				nCount++;
			}
		}
		tb_Title->AppendText("\r\nВ список были добавлены " + Convert::ToString(nCount) + " значения, удовлетворяющие условию");
	}
	else {
		f_input->Close();
		return;
	}
}
private: System::Void сведенияОПрограмистеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
	tb_Title->Text = "Программу создала ученица группы 1бИТС1 Лисовенко Елизавета Павловна!";
}
private: System::Void шифрованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Input^ ipd = gcnew Input;

	tb_Title->Text = "Шифрование вводимой строки и её дешифрование";
	ipd->SetLabel("Введите текст для шифрования");
	if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ stext = ipd->GetText();
		tb_Title->AppendText("\r\nВведённая строка:  \'");
		tb_Title->AppendText(stext + "\'");
		//ipd->Visible = false;

		std::string ss;
		StringToChar(stext, ss);
		lb_Output->Items->Add("Шифрованный текст: ");
		//const char* sch = ss.c_str();
		std::string shifr = EncodeText((char*)ss.c_str());
		lb_Output->Items->Add(CharToString((char*)shifr.c_str()));
		lb_Output->Items->Add("");

		lb_Output->Items->Add("Дешифрованный текст: ");
		std::string unshifr = DecodeText((char*)shifr.c_str());
		lb_Output->Items->Add(CharToString((char*)unshifr.c_str()));
	}

	ipd->Close();
}
private: System::Void рекурсияИГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursion();
	lb_Output->Visible = true;
	onaction = act_RECURSION;
	Refresh();
	this->Focus();
}
private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	switch (onaction) {
	case act_KLASSES: {
		p_Output->Visible = false;
		if (mng == 0)return;
		mng->Draw(e->Graphics);
		if (ActiveClass != 0) {
			Pen^ pen = gcnew Pen(Color::Firebrick, 4);

			System::Drawing::Rectangle rc(ActiveClass->X(), ActiveClass->Y(), ActiveClass->Width(), ActiveClass->Height());
			e->Graphics->DrawRectangle(pen, rc);
		}
	}break;
	case act_LABIRINT: {
		p_Output->Visible = false;
		onaction = LabirintDraw(e->Graphics);
		if (onaction == act_LABIRINTEXIT) Refresh();
	}break;
	case act_LABIRINTEXIT: {
		p_Output->Visible = true;
		lb_Output->Items->Clear();
		lb_Output->Items->Add("Вы прошли лабиринт!!!УРАА!!!!!*!*!*!*");
		LabirintDraw(e->Graphics);
	}break;
	case act_LABIRINTPATH: {
		LabirintDraw(e->Graphics);
		StartMoving(e->Graphics);
		onaction = act_LABIRINT;
	}break;
	case act_BREAK: {
		p_Output->Visible = true;
		lb_Output->Items->Clear();
		lb_Output->Items->Add("Операция прервана!!!!");
		onaction = act_NONE;
	}break;
	case act_RECURSION: {
		p_Output->Visible = true;
		RECT rct{ 500, 200, 1300, 600 };
		DrawGraf(e->Graphics, RecOut, 11, rct);
		this->Focus();
	}break;
	default: {
	}
	}
}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*if (onaction == act_LABIRINT) {
			switch (e->KeyChar) {
			case 13:;
			};
		}
		else
			char ch = e->KeyChar;*/
}
private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	onaction = act_NONE;
	lb_Output->Items->Clear();
	Refresh();
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	switch (e->KeyData) {
	case System::Windows::Forms::Keys::F5:
			onaction = act_NONE;
			lb_Output->Items->Clear();
			Refresh();
			break;
	case System::Windows::Forms::Keys::F9:
		/*if (onaction == act_UINT) onaction = act_KLASSES;
		else if (onaction == act_KLASSES)onaction = act_UINT;
		Refresh();*/
		break;
	}

	if (onaction = act_LABIRINT) {
		switch (e->KeyValue) {
		case 27:onaction = act_BREAK; Refresh(); break;
		case 115:onaction = act_LABIRINTPATH; Refresh(); break;
		case 37:case 38:case 39:case 40:
			LabirintKeys(e->KeyValue); Refresh();
			break;
		default:;
		};
	}
}
private: System::Void lb_Output_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	MyForm_KeyDown(this, e);
}
private: System::Void лабиринтToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	p_Output->Visible = false;
	tb_Title->Text = "Игра Лабиринт\r\nНайдите выход, управляя жуком с помощью стрелочек";
	onaction = act_LABIRINT;
	this->Focus();
	Refresh();
}
private: System::Void прямоугольникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mng == 0)mng = new TManager;
	TFigura* fig = new TRectangle(500, 200);
	fig->BrushColor(RGB(176, 224, 230));
	mng->AddFigura(fig);
	fig->SetId(mng->Size());
	Refresh();
}
private: System::Void классыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mng == 0) { mng = new TManager; }
		onaction = act_KLASSES;
		p_Output->Visible = false;
		tb_Title->Text = "Включение режима работы с классами";
}
private: System::Void эллипсToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mng == 0)mng = new TManager;
	TFigura* fig = new TEllipse(700, 300);
	fig->BrushColor(RGB(238, 232, 170));
	mng->AddFigura(fig);
	fig->SetId(mng->Size());
	Refresh();
}
private: System::Void треугольникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mng == 0)mng = new TManager;
	TFigura* fig = new TTriangle(450, 500);
	fig->BrushColor(RGB(221, 160, 221));
	mng->AddFigura(fig);
	fig->SetId(mng->Size());
	Refresh();
}
private: System::Void методПрямогоВыбораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "Сортировка массива слов методом поиска позиции в ряду.\r\n\r\nВведите слова через пробел!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("Введите слова через пробел:");
	f_input->ShowDialog();
	String^ sRes = f_input->GetText();
	//array<String^>^ sr = sRes->Split(' ');
	cli::array<System::String^>^ sr = sRes->Split(' ');
	int n = sr->Length;

	std::string* w = new std::string[n];
	for (int r = 0; r < n; r++) {
		StringToChar(sr[r], w[r]);
	}
	do {
		f = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (w[i].compare(w[i + 1]) > 0) {
				std::string word = w[i];
				w[i] = w[i + 1];
				w[i + 1] = word;
				f = true;
			}
		}
	} while (f);

	lb_Output->Items->Add("Результат сортировки:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void лабораторнаяРабота1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	Input^ ipd1 = gcnew Input;
	Input^ ipd2 = gcnew Input;
	Input^ ipd3 = gcnew Input;
	Input^ ipd4 = gcnew Input;

	tb_Title->Text = "Даны переменные с1, с2, с3. с4.\r\nПроверить, являются ли они сторонами описанного четырехугольника \r\n";
	ipd1->SetLabel("Введите первую сторону:");
	ipd2->SetLabel("Введите вторую сторону:");
	ipd3->SetLabel("Введите третью сторону:");
	ipd4->SetLabel("Введите четвёртую сторону:");
		
	int c1, c2, c3, c4;

	if (ipd1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		ipd2->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		ipd3->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		ipd4->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		c1 = Convert::ToInt16(ipd1->GetText());
		c2 = Convert::ToInt16(ipd2->GetText());
		c3 = Convert::ToInt16(ipd3->GetText());
		c4 = Convert::ToInt16(ipd4->GetText());
		tb_Title->AppendText("\r\n1-я сторона:" + c1 + " 2-я сторона:" + c2 + " 3-я сторона:" + c3 + " 4-я сторона:" + c4);

		if ((c1 + c3 == c2 + c4) || (c1 + c2 == c3 + c4) || (c1 + c4 == c2 + c3))
		{
			if (c1 + c2 == c3 + c4)
			{
				lb_Output->Items->Add("c1=" + c1 + " c2=" + c2 + " и c3=" + c3 + " c4=" + c4 + "\r\n");
			}
			else
				if (c1 + c3 == c2 + c4)
				{
					lb_Output->Items->Add("c1=" + c1 + " c3=" + c3 + " и c2=" + c2 + " c4=" + c4 + "\r\n");
				}
				else
					if (c1 + c4 == c2 + c3)
					{
						lb_Output->Items->Add("c1=" + c1 + " c4=" + c4 + " и c2=" + c2 + " c3=" + c3 + "\r\n");
					}
		}
		else
			if ((c1 <= 0) || (c2 <= 0) || (c3 <= 0) || (c4 <= 0))
			{
				lb_Output->Items->Add("Введены некорректные данные\r\n");
			}
			else
				lb_Output->Items->Add("Фигура не описана\r\n");
	}

}
private: System::Void лабораторнаяРабота2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	Input^ ipd = gcnew Input;
	Input^ ipd1 = gcnew Input;

	tb_Title->Text = "Составление таблицы значений, исходя из заданных параметров\r\n";
	ipd->SetLabel("Введите A (>0):");
	ipd1->SetLabel("Введите k:");

	double A, X, Y, N = 6, k, P;
	int count = 0;

	if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ipd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		double a = Convert::ToDouble(ipd->GetText());
		if (a <= 0)lb_Output->Items->Add("A не положительное число!!");
		double dx = 2 * a / 25;
		double x1 = a * (-0.4);
		double k = Convert::ToDouble(ipd->GetText());
		if (a <= 0)return;
		double x = x1;
		int n = 1, y = 0;
		lb_Output->Items->Add("№" + "\t\t" + "x" + "\t" + "y");
		while (n < N) {
			if (x < 0) {
				lb_Output->Items->Add(Convert::ToString(n) + "\t\t" + Convert::ToString(x) + "\t" + Convert::ToString(sqrt(a * x * x + (0.4 * sin(x)) + 1)));
				y = sqrt(a * x * x + (0.4 * sin(x)) + 1);
			}
			else {
				lb_Output->Items->Add(Convert::ToString(n) + "\t\t" + Convert::ToString(x) + "\t" + Convert::ToString(sqrt(a * x * x + (0.4 * cos(x)) + 1)));
				y = sqrt(a * x * x + (0.4 * cos(x)) + 1);
			}
			x += dx;
			n++;
		}
	}
}
private: System::Void методПузырькаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "Сортировка массива слов методом пузырька.\r\n\r\nВведите слова через пробел!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("Введите слова через пробел:");
	f_input->ShowDialog();
	String^ sRes = f_input->GetText();
	//array<String^>^ sr = sRes->Split(' ');
	cli::array<System::String^>^ sr = sRes->Split(' ');
	int n = sr->Length;

	std::string* w = new std::string[n];
	for (int r = 0; r < n; r++) {
		StringToChar(sr[r], w[r]);
	}
	do {
		f = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (w[i].compare(w[i + 1]) > 0) {
				std::string word = w[i];
				w[i] = w[i + 1];
				w[i + 1] = word;
				f = true;
			}
		}
	} while (f);

	lb_Output->Items->Add("Результат сортировки:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void быстраяСортировкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "Быстрая сортировка массива слов.\r\n\r\nВведите слова через пробел!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("Введите слова через пробел:");
	f_input->ShowDialog();
	String^ sRes = f_input->GetText();
	//array<String^>^ sr = sRes->Split(' ');
	cli::array<System::String^>^ sr = sRes->Split(' ');
	int n = sr->Length;

	std::string* w = new std::string[n];
	for (int r = 0; r < n; r++) {
		StringToChar(sr[r], w[r]);
	}
	do {
		f = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (w[i].compare(w[i + 1]) > 0) {
				std::string word = w[i];
				w[i] = w[i + 1];
				w[i + 1] = word;
				f = true;
			}
		}
	} while (f);

	lb_Output->Items->Add("Результат сортировки:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void обратнаяСортировкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "Сортировка массива слов от Я до А.\r\n\r\nВведите слова через пробел!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("Введите слова через пробел:");
	f_input->ShowDialog();
	String^ sRes = f_input->GetText();
	//array<String^>^ sr = sRes->Split(' ');
	cli::array<System::String^>^ sr = sRes->Split(' ');
	int n = sr->Length;

	std::string* w = new std::string[n];
	for (int r = 0; r < n; r++) {
		StringToChar(sr[r], w[r]);
	}
	do {
		f = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (w[i].compare(w[i + 1]) * -1 > 0) {
				std::string word = w[i];
				w[i] = w[i + 1];
				w[i + 1] = word;
				f = true;
			}
		}
	} while (f);

	lb_Output->Items->Add("Результат сортировки:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void лабораторнаяРабота3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
	//lab_32^ f_lab32 = gcnew lab_32;
	Input^ input0 = gcnew Input;
	Input^ input1 = gcnew Input;
	Input^ input2 = gcnew Input;
	Input^ input3 = gcnew Input;
	Input^ input4 = gcnew Input;
	Input^ input5 = gcnew Input;
	Input^ input6 = gcnew Input;
	Input^ input7 = gcnew Input;
	Input^ input8 = gcnew Input;
	Input^ input9 = gcnew Input;

	tb_Title->Text = "Вычисления с выбором формулы.\r\n\r\nВведите значения массива : ";
		//f_lab32->ShowDialog();
	if (input0->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK && (input1->ShowDialog() ==
			System::Windows::Forms::DialogResult::OK) && (input2->ShowDialog() ==
				System::Windows::Forms::DialogResult::OK) && (input3->ShowDialog() ==
					System::Windows::Forms::DialogResult::OK) && (input4->ShowDialog() ==
						System::Windows::Forms::DialogResult::OK) && (input5->ShowDialog() ==
							System::Windows::Forms::DialogResult::OK) && (input6->ShowDialog() ==
								System::Windows::Forms::DialogResult::OK) && (input7->ShowDialog() ==
									System::Windows::Forms::DialogResult::OK) && (input8->ShowDialog() ==
										System::Windows::Forms::DialogResult::OK) && (input9->ShowDialog() ==
											System::Windows::Forms::DialogResult::OK))
	{

		double X[10]; // исходный массив
		//cout << "Введите значения элементов массива X\n\n" << endl;


		X[0] = Convert::ToDouble(input0->GetText());
		X[1] = Convert::ToDouble(input1->GetText());
		X[2] = Convert::ToDouble(input2->GetText());
		X[3] = Convert::ToDouble(input3->GetText());
		X[4] = Convert::ToDouble(input4->GetText());
		X[5] = Convert::ToDouble(input5->GetText());
		X[6] = Convert::ToDouble(input6->GetText());
		X[7] = Convert::ToDouble(input7->GetText());
		X[8] = Convert::ToDouble(input8->GetText());
		X[9] = Convert::ToDouble(input9->GetText());
		//cout << "   \n\n";
		// вычисляем вспомогательные значения
		double s1 = 0; // сумма значений Xi
		double s2 = 0; // сумма значений Xi-2
		for (int i = 0; i < 10; i++)
		{
			s1 += X[i];
			s2 += (X[i] - 2);
		}

		double Y[10]; // новые массив
		//lb_SideBar->Items->Add("Новый массив Y с элементами, определяемыми по формуле");
			//lb_SideBar->Items->Add("");
			for (int i = 0; i < 10; i++)
			{
				Y[i] = X[i] / s1 - X[1] / s2;
				//lb_SideBar->Items->Add("Y[" + (i + 1) + "] = " + Y[i]);
			}
		//cout << "   \n\n";
		// вычисляем позицию Ymin
		int p = 0; // по умолчанию считаем минимальным первый элемент
			for (int i = 1; i < 10; i++)
				if (Y[i] < Y[p])
					p = i;
		lb_Output->Items->Add("Значение Ymin = " + Y[p]);
		lb_Output->Items->Add("");
		//cout << "   \n\n";
		// вычисляем значение Sa - среднее арифметическое массива X
		double Sa = s1 / 10; // воспользуемся суммой, вычисленной выше
			lb_Output->Items->Add("Значение Sa = " + Sa);
		lb_Output->Items->Add("");
		//cout << "   \n\n";
		// заменяем все элементы, расположенные после Ymin на Sa
		for (int i = p + 1; i < 10; i++)
			Y[i] = Sa;
		lb_Output->Items->Add("Изменившийся массив Y");
		//cout << "Изменившийся массив Y" << endl;
		for (int i = 0; i < 10; i++)
			lb_Output->Items->Add("Y[" + (i + 1) + "] = " + Y[i]);


	}

}
};
}
