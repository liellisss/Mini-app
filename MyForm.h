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

namespace ������������ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyAction onaction;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	public:
		static stRecursion* RecOut;
		static TManager* mng = 0;
		static int mx, my, dx, dy;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������3ToolStripMenuItem;


	public:
		static TFigura* ActiveClass = 0;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ p_Tite;
	private: System::Windows::Forms::TextBox^ tb_Title;
	private: System::Windows::Forms::Panel^ p_Output;
	private: System::Windows::Forms::ListBox^ lb_Output;





	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�����ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->��������ToolStripMenuItem, this->���������������ToolStripMenuItem, this->����������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->������ToolStripMenuItem, this->�������������������ToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(781, 24);
			this->menu->TabIndex = 1;
			this->menu->Text = L"menumain";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������������������ToolStripMenuItem,
					this->������������������1ToolStripMenuItem, this->������������������2ToolStripMenuItem, this->������������������3ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->�������ToolStripMenuItem->Text = L"1 �������";
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->��������������������ToolStripMenuItem->Text = L"�������� � �����������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������ToolStripMenuItem_Click);
			// 
			// ������������������1ToolStripMenuItem
			// 
			this->������������������1ToolStripMenuItem->Name = L"������������������1ToolStripMenuItem";
			this->������������������1ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->������������������1ToolStripMenuItem->Text = L"������������ ������ �1";
			this->������������������1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������1ToolStripMenuItem_Click);
			// 
			// ������������������2ToolStripMenuItem
			// 
			this->������������������2ToolStripMenuItem->Name = L"������������������2ToolStripMenuItem";
			this->������������������2ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->������������������2ToolStripMenuItem->Text = L"������������ ������ �2";
			this->������������������2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������2ToolStripMenuItem_Click);
			// 
			// ������������������3ToolStripMenuItem
			// 
			this->������������������3ToolStripMenuItem->Name = L"������������������3ToolStripMenuItem";
			this->������������������3ToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->������������������3ToolStripMenuItem->Text = L"������������ ������ �3";
			this->������������������3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������3ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������ToolStripMenuItem1 });
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(253, 22);
			this->��������ToolStripMenuItem1->Text = L"�������� � ������� ��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem1_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(130, 20);
			this->���������������ToolStripMenuItem->Text = L"�������� � ������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������������������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�����������������ToolStripMenuItem, this->������������������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->������������������ToolStripMenuItem->Text = L"����� ������� ������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->�������������ToolStripMenuItem->Text = L"����� ��������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->�����������������ToolStripMenuItem->Text = L"������� ����������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->������������������ToolStripMenuItem->Text = L"�������� ����������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->�������������������������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(261, 22);
			this->�������������������������ToolStripMenuItem->Text = L"���������� �������� �������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->�������������ToolStripMenuItem->Text = L"�������� �����";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(167, 20);
			this->�������������������ToolStripMenuItem->Text = L"����� �� ������������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������ToolStripMenuItem_Click);
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
			this->tb_Title->Text = L"����� ����� ������� � �������� ������";
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
			this->Text = L"���������� �������� �.�.";
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
	private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   public: void ClearToNewTask() {
		   tb_Title->Text = "�������� ����� ���� ��� ������� ������";
		   tb_Title->Enabled = false;
		   lb_Output->Items->Clear();
		   p_Output->Visible = true;
		   onaction = act_NONE;
	   }
private: System::Void MyFom_Load(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
}

private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
	tb_Title->Text = "� ������� ��������� 2-� ������� �����, ����� ��, ������� ������������� �����\n\n";

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
		tb_Title->AppendText("\r\n� ������ ���� ��������� " + Convert::ToString(nCount) + " ��������, ��������������� �������");
	}
	else {
		f_input->Close();
		return;
	}
}
private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();
	tb_Title->Text = "��������� ������� ������� ������ 1����1 ��������� ��������� ��������!";
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Input^ ipd = gcnew Input;

	tb_Title->Text = "���������� �������� ������ � � ������������";
	ipd->SetLabel("������� ����� ��� ����������");
	if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ stext = ipd->GetText();
		tb_Title->AppendText("\r\n�������� ������:  \'");
		tb_Title->AppendText(stext + "\'");
		//ipd->Visible = false;

		std::string ss;
		StringToChar(stext, ss);
		lb_Output->Items->Add("����������� �����: ");
		//const char* sch = ss.c_str();
		std::string shifr = EncodeText((char*)ss.c_str());
		lb_Output->Items->Add(CharToString((char*)shifr.c_str()));
		lb_Output->Items->Add("");

		lb_Output->Items->Add("������������� �����: ");
		std::string unshifr = DecodeText((char*)shifr.c_str());
		lb_Output->Items->Add(CharToString((char*)unshifr.c_str()));
	}

	ipd->Close();
}
private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
		lb_Output->Items->Add("�� ������ ��������!!!����!!!!!*!*!*!*");
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
		lb_Output->Items->Add("�������� ��������!!!!");
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
private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	p_Output->Visible = false;
	tb_Title->Text = "���� ��������\r\n������� �����, �������� ����� � ������� ���������";
	onaction = act_LABIRINT;
	this->Focus();
	Refresh();
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mng == 0)mng = new TManager;
	TFigura* fig = new TRectangle(500, 200);
	fig->BrushColor(RGB(176, 224, 230));
	mng->AddFigura(fig);
	fig->SetId(mng->Size());
	Refresh();
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mng == 0) { mng = new TManager; }
		onaction = act_KLASSES;
		p_Output->Visible = false;
		tb_Title->Text = "��������� ������ ������ � ��������";
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mng == 0)mng = new TManager;
	TFigura* fig = new TEllipse(700, 300);
	fig->BrushColor(RGB(238, 232, 170));
	mng->AddFigura(fig);
	fig->SetId(mng->Size());
	Refresh();
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mng == 0)mng = new TManager;
	TFigura* fig = new TTriangle(450, 500);
	fig->BrushColor(RGB(221, 160, 221));
	mng->AddFigura(fig);
	fig->SetId(mng->Size());
	Refresh();
}
private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "���������� ������� ���� ������� ������ ������� � ����.\r\n\r\n������� ����� ����� ������!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("������� ����� ����� ������:");
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

	lb_Output->Items->Add("��������� ����������:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void ������������������1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	Input^ ipd1 = gcnew Input;
	Input^ ipd2 = gcnew Input;
	Input^ ipd3 = gcnew Input;
	Input^ ipd4 = gcnew Input;

	tb_Title->Text = "���� ���������� �1, �2, �3. �4.\r\n���������, �������� �� ��� ��������� ���������� ���������������� \r\n";
	ipd1->SetLabel("������� ������ �������:");
	ipd2->SetLabel("������� ������ �������:");
	ipd3->SetLabel("������� ������ �������:");
	ipd4->SetLabel("������� �������� �������:");
		
	int c1, c2, c3, c4;

	if (ipd1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		ipd2->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		ipd3->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		ipd4->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		c1 = Convert::ToInt16(ipd1->GetText());
		c2 = Convert::ToInt16(ipd2->GetText());
		c3 = Convert::ToInt16(ipd3->GetText());
		c4 = Convert::ToInt16(ipd4->GetText());
		tb_Title->AppendText("\r\n1-� �������:" + c1 + " 2-� �������:" + c2 + " 3-� �������:" + c3 + " 4-� �������:" + c4);

		if ((c1 + c3 == c2 + c4) || (c1 + c2 == c3 + c4) || (c1 + c4 == c2 + c3))
		{
			if (c1 + c2 == c3 + c4)
			{
				lb_Output->Items->Add("c1=" + c1 + " c2=" + c2 + " � c3=" + c3 + " c4=" + c4 + "\r\n");
			}
			else
				if (c1 + c3 == c2 + c4)
				{
					lb_Output->Items->Add("c1=" + c1 + " c3=" + c3 + " � c2=" + c2 + " c4=" + c4 + "\r\n");
				}
				else
					if (c1 + c4 == c2 + c3)
					{
						lb_Output->Items->Add("c1=" + c1 + " c4=" + c4 + " � c2=" + c2 + " c3=" + c3 + "\r\n");
					}
		}
		else
			if ((c1 <= 0) || (c2 <= 0) || (c3 <= 0) || (c4 <= 0))
			{
				lb_Output->Items->Add("������� ������������ ������\r\n");
			}
			else
				lb_Output->Items->Add("������ �� �������\r\n");
	}

}
private: System::Void ������������������2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	Input^ ipd = gcnew Input;
	Input^ ipd1 = gcnew Input;

	tb_Title->Text = "����������� ������� ��������, ������ �� �������� ����������\r\n";
	ipd->SetLabel("������� A (>0):");
	ipd1->SetLabel("������� k:");

	double A, X, Y, N = 6, k, P;
	int count = 0;

	if (ipd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ipd1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		double a = Convert::ToDouble(ipd->GetText());
		if (a <= 0)lb_Output->Items->Add("A �� ������������� �����!!");
		double dx = 2 * a / 25;
		double x1 = a * (-0.4);
		double k = Convert::ToDouble(ipd->GetText());
		if (a <= 0)return;
		double x = x1;
		int n = 1, y = 0;
		lb_Output->Items->Add("�" + "\t\t" + "x" + "\t" + "y");
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
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "���������� ������� ���� ������� ��������.\r\n\r\n������� ����� ����� ������!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("������� ����� ����� ������:");
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

	lb_Output->Items->Add("��������� ����������:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "������� ���������� ������� ����.\r\n\r\n������� ����� ����� ������!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("������� ����� ����� ������:");
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

	lb_Output->Items->Add("��������� ����������:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearToNewTask();

	tb_Title->Text = "���������� ������� ���� �� � �� �.\r\n\r\n������� ����� ����� ������!";
	bool f;
	Input^ f_input = gcnew Input;
	f_input->SetLabel("������� ����� ����� ������:");
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

	lb_Output->Items->Add("��������� ����������:"); lb_Output->Items->Add(" ");
	for (int r = 0; r < n; r++)
	{
		sr[r] = CharToString((char*)w[r].c_str());
		lb_Output->Items->Add("\n " + sr[r]);
	}
}
private: System::Void ������������������3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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

	tb_Title->Text = "���������� � ������� �������.\r\n\r\n������� �������� ������� : ";
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

		double X[10]; // �������� ������
		//cout << "������� �������� ��������� ������� X\n\n" << endl;


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
		// ��������� ��������������� ��������
		double s1 = 0; // ����� �������� Xi
		double s2 = 0; // ����� �������� Xi-2
		for (int i = 0; i < 10; i++)
		{
			s1 += X[i];
			s2 += (X[i] - 2);
		}

		double Y[10]; // ����� ������
		//lb_SideBar->Items->Add("����� ������ Y � ����������, ������������� �� �������");
			//lb_SideBar->Items->Add("");
			for (int i = 0; i < 10; i++)
			{
				Y[i] = X[i] / s1 - X[1] / s2;
				//lb_SideBar->Items->Add("Y[" + (i + 1) + "] = " + Y[i]);
			}
		//cout << "   \n\n";
		// ��������� ������� Ymin
		int p = 0; // �� ��������� ������� ����������� ������ �������
			for (int i = 1; i < 10; i++)
				if (Y[i] < Y[p])
					p = i;
		lb_Output->Items->Add("�������� Ymin = " + Y[p]);
		lb_Output->Items->Add("");
		//cout << "   \n\n";
		// ��������� �������� Sa - ������� �������������� ������� X
		double Sa = s1 / 10; // ������������� ������, ����������� ����
			lb_Output->Items->Add("�������� Sa = " + Sa);
		lb_Output->Items->Add("");
		//cout << "   \n\n";
		// �������� ��� ��������, ������������� ����� Ymin �� Sa
		for (int i = p + 1; i < 10; i++)
			Y[i] = Sa;
		lb_Output->Items->Add("������������ ������ Y");
		//cout << "������������ ������ Y" << endl;
		for (int i = 0; i < 10; i++)
			lb_Output->Items->Add("Y[" + (i + 1) + "] = " + Y[i]);


	}

}
};
}
