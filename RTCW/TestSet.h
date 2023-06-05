#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Structure.h"
#pragma once

namespace RTCW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestSet
	/// </summary>
	public ref class TestSet : public System::Windows::Forms::Form
	{
	public:
		TestSet(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TestSet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ question_count_box;
	private: System::Windows::Forms::TextBox^ time_box;
	protected:


	protected:

	protected:


	private: System::Windows::Forms::Label^ mark_label;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->question_count_box = (gcnew System::Windows::Forms::TextBox());
			this->time_box = (gcnew System::Windows::Forms::TextBox());
			this->mark_label = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// question_count_box
			// 
			this->question_count_box->Location = System::Drawing::Point(302, 181);
			this->question_count_box->Name = L"question_count_box";
			this->question_count_box->Size = System::Drawing::Size(150, 22);
			this->question_count_box->TabIndex = 0;
			this->question_count_box->Text = L"number of qustions";
			this->question_count_box->TextChanged += gcnew System::EventHandler(this, &TestSet::question_count_label_TextChanged);
			// 
			// time_box
			// 
			this->time_box->Location = System::Drawing::Point(596, 181);
			this->time_box->Name = L"time_box";
			this->time_box->Size = System::Drawing::Size(128, 22);
			this->time_box->TabIndex = 1;
			this->time_box->Text = L"time";
			this->time_box->TextChanged += gcnew System::EventHandler(this, &TestSet::time_box_TextChanged);
			// 
			// mark_label
			// 
			this->mark_label->AutoSize = true;
			this->mark_label->Location = System::Drawing::Point(453, 247);
			this->mark_label->Name = L"mark_label";
			this->mark_label->Size = System::Drawing::Size(104, 16);
			this->mark_label->TabIndex = 3;
			this->mark_label->Text = L"Mark calculation";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(456, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TestSet::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(456, 406);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 39);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Main Menu";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &TestSet::button5_Click);
			// 
			// TestSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 542);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->mark_label);
			this->Controls->Add(this->time_box);
			this->Controls->Add(this->question_count_box);
			this->Name = L"TestSet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TestSet";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   double mark;
		   int time;
		   double num;
private: System::Void question_count_label_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	try {
		if (question_count_box->Text->Length)
		{
			num = Convert::ToDouble(question_count_box->Text);
			mark_label->Text = "Mark per right answer - " + (5 / num).ToString("F2");
			mark = (5 / num);
		}
	}
	catch (Exception^ ex) {
		question_count_box->Text = "";
	}
}
private: System::Void time_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (time_box->Text->Length)
		{
			time = Convert::ToInt32(time_box->Text);
			std::cout << time << std::endl;
		}
	}
	catch (Exception^ ex) {
		time_box->Text = "";
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* file;
	Test_Data testreq;
	int qc = Convert::ToInt32(question_count_box->Text);

	testreq.mark = mark;
	testreq.qc = qc;
	testreq.question_time = time;

	file = fopen("another_data\\test_settings.txt", "w");

	fwrite(&testreq, sizeof(testreq), 1, file);
	fclose(file);
}
};
}
