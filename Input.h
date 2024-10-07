#pragma once

namespace приложеньеце {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ b_Ok;
	private: System::Windows::Forms::Button^ b_Cancel;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Input::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->b_Ok = (gcnew System::Windows::Forms::Button());
			this->b_Cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¬ведите данные";
			this->label1->Click += gcnew System::EventHandler(this, &Input::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(359, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Input::textBox1_KeyPress);
			// 
			// b_Ok
			// 
			this->b_Ok->BackColor = System::Drawing::Color::PowderBlue;
			this->b_Ok->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->b_Ok->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_Ok->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_Ok.Image")));
			this->b_Ok->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_Ok->Location = System::Drawing::Point(66, 86);
			this->b_Ok->Name = L"b_Ok";
			this->b_Ok->Size = System::Drawing::Size(136, 37);
			this->b_Ok->TabIndex = 2;
			this->b_Ok->Text = L"¬вод";
			this->b_Ok->UseVisualStyleBackColor = false;
			this->b_Ok->Click += gcnew System::EventHandler(this, &Input::b_Ok_Click);
			// 
			// b_Cancel
			// 
			this->b_Cancel->BackColor = System::Drawing::Color::DarkSalmon;
			this->b_Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->b_Cancel->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_Cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_Cancel.Image")));
			this->b_Cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_Cancel->Location = System::Drawing::Point(288, 86);
			this->b_Cancel->Name = L"b_Cancel";
			this->b_Cancel->Size = System::Drawing::Size(137, 37);
			this->b_Cancel->TabIndex = 3;
			this->b_Cancel->Text = L"ќтмена";
			this->b_Cancel->UseVisualStyleBackColor = false;
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 135);
			this->Controls->Add(this->b_Cancel);
			this->Controls->Add(this->b_Ok);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Input";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"¬вод входных параметров";
			this->Load += gcnew System::EventHandler(this, &Input::Input_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b_Ok_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: String^ GetText() { return textBox1->Text; }
	public: void SetLabel(String^ ptext) { this->label1->Text = ptext; }

private: System::Void Input_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	switch (e->KeyChar) {
	case 1: {
		DialogResult = System::Windows::Forms::DialogResult::OK;
		Close();
	}break;
	}
}
};
}