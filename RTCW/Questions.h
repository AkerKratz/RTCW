#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>
#include "Structure.h"
#pragma once

namespace RTCW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for Questions
	/// </summary>
	public ref class Questions : public System::Windows::Forms::Form
	{
	public:
		Questions(void)
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
		~Questions()
		{
			if (components)
			{
				delete components;
			}
		}










	protected:










	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Label^ total_questions_label;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ question_box;

	private: System::Windows::Forms::RichTextBox^ question_A;
	private: System::Windows::Forms::RichTextBox^ question_B;
	private: System::Windows::Forms::RichTextBox^ question_C;
	private: System::Windows::Forms::RichTextBox^ question_D;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ answer_A;
	private: System::Windows::Forms::RadioButton^ answer_B;
	private: System::Windows::Forms::RadioButton^ answer_C;
	private: System::Windows::Forms::RadioButton^ answer_D;
	private: System::Windows::Forms::RadioButton^ answer_E;







	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->total_questions_label = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->question_box = (gcnew System::Windows::Forms::RichTextBox());
			this->question_A = (gcnew System::Windows::Forms::RichTextBox());
			this->question_B = (gcnew System::Windows::Forms::RichTextBox());
			this->question_C = (gcnew System::Windows::Forms::RichTextBox());
			this->question_D = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->answer_A = (gcnew System::Windows::Forms::RadioButton());
			this->answer_B = (gcnew System::Windows::Forms::RadioButton());
			this->answer_C = (gcnew System::Windows::Forms::RadioButton());
			this->answer_D = (gcnew System::Windows::Forms::RadioButton());
			this->answer_E = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(261, 459);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Questions::button1_Click);
			// 
			// total_questions_label
			// 
			this->total_questions_label->AutoSize = true;
			this->total_questions_label->Location = System::Drawing::Point(346, 58);
			this->total_questions_label->Name = L"total_questions_label";
			this->total_questions_label->Size = System::Drawing::Size(14, 16);
			this->total_questions_label->TabIndex = 3;
			this->total_questions_label->Text = L"0";
			this->total_questions_label->Visible = false;
			this->total_questions_label->Click += gcnew System::EventHandler(this, &Questions::label1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(301, 370);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 16);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Another answer";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete all";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Questions::button2_Click);
			// 
			// question_box
			// 
			this->question_box->Location = System::Drawing::Point(212, 77);
			this->question_box->Name = L"question_box";
			this->question_box->Size = System::Drawing::Size(294, 52);
			this->question_box->TabIndex = 5;
			this->question_box->Text = L"";
			// 
			// question_A
			// 
			this->question_A->Location = System::Drawing::Point(212, 159);
			this->question_A->Name = L"question_A";
			this->question_A->Size = System::Drawing::Size(294, 42);
			this->question_A->TabIndex = 5;
			this->question_A->Text = L"";
			// 
			// question_B
			// 
			this->question_B->Location = System::Drawing::Point(212, 207);
			this->question_B->Name = L"question_B";
			this->question_B->Size = System::Drawing::Size(294, 42);
			this->question_B->TabIndex = 5;
			this->question_B->Text = L"";
			// 
			// question_C
			// 
			this->question_C->Location = System::Drawing::Point(212, 255);
			this->question_C->Name = L"question_C";
			this->question_C->Size = System::Drawing::Size(294, 42);
			this->question_C->TabIndex = 5;
			this->question_C->Text = L"";
			// 
			// question_D
			// 
			this->question_D->Location = System::Drawing::Point(212, 303);
			this->question_D->Name = L"question_D";
			this->question_D->Size = System::Drawing::Size(294, 42);
			this->question_D->TabIndex = 5;
			this->question_D->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(190, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(190, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 267);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"C";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(190, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"D";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(190, 366);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"E";
			// 
			// answer_A
			// 
			this->answer_A->AutoSize = true;
			this->answer_A->Location = System::Drawing::Point(513, 172);
			this->answer_A->Name = L"answer_A";
			this->answer_A->Size = System::Drawing::Size(105, 20);
			this->answer_A->TabIndex = 7;
			this->answer_A->TabStop = true;
			this->answer_A->Text = L"Right answer";
			this->answer_A->UseVisualStyleBackColor = true;
			// 
			// answer_B
			// 
			this->answer_B->AutoSize = true;
			this->answer_B->Location = System::Drawing::Point(513, 219);
			this->answer_B->Name = L"answer_B";
			this->answer_B->Size = System::Drawing::Size(105, 20);
			this->answer_B->TabIndex = 7;
			this->answer_B->TabStop = true;
			this->answer_B->Text = L"Right answer";
			this->answer_B->UseVisualStyleBackColor = true;
			// 
			// answer_C
			// 
			this->answer_C->AutoSize = true;
			this->answer_C->Location = System::Drawing::Point(513, 263);
			this->answer_C->Name = L"answer_C";
			this->answer_C->Size = System::Drawing::Size(105, 20);
			this->answer_C->TabIndex = 7;
			this->answer_C->TabStop = true;
			this->answer_C->Text = L"Right answer";
			this->answer_C->UseVisualStyleBackColor = true;
			// 
			// answer_D
			// 
			this->answer_D->AutoSize = true;
			this->answer_D->Location = System::Drawing::Point(512, 314);
			this->answer_D->Name = L"answer_D";
			this->answer_D->Size = System::Drawing::Size(105, 20);
			this->answer_D->TabIndex = 7;
			this->answer_D->TabStop = true;
			this->answer_D->Text = L"Right answer";
			this->answer_D->UseVisualStyleBackColor = true;
			// 
			// answer_E
			// 
			this->answer_E->AutoSize = true;
			this->answer_E->Location = System::Drawing::Point(513, 366);
			this->answer_E->Name = L"answer_E";
			this->answer_E->Size = System::Drawing::Size(105, 20);
			this->answer_E->TabIndex = 7;
			this->answer_E->TabStop = true;
			this->answer_E->Text = L"Right answer";
			this->answer_E->UseVisualStyleBackColor = true;
			// 
			// Questions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->answer_E);
			this->Controls->Add(this->answer_D);
			this->Controls->Add(this->answer_C);
			this->Controls->Add(this->answer_B);
			this->Controls->Add(this->answer_A);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->question_D);
			this->Controls->Add(this->question_C);
			this->Controls->Add(this->question_B);
			this->Controls->Add(this->question_A);
			this->Controls->Add(this->question_box);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->total_questions_label);
			this->Controls->Add(this->button1);
			this->Name = L"Questions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Questions";
			this->Load += gcnew System::EventHandler(this, &Questions::Questions_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int what_answer() {
			if (answer_A->Checked == true) {
				answer_A->Checked = false;
				return 1;
			}
			else if (answer_B->Checked == true) {
				answer_B->Checked = false;
				return 2;
			}
			else if (answer_C->Checked == true) {
				answer_C->Checked = false;
				return 3;
			}
			else if (answer_D->Checked == true) {
				answer_D->Checked = false;
				return 4;
			}
			else if (answer_E->Checked == true) {
				answer_E->Checked = false;
				return 5;
			}
			else
				return 0;
		}
		void clear_all_textBoxes() {
			question_box->Clear();
			question_A->Clear();
			question_B->Clear();
			question_C->Clear();
			question_D->Clear();
		}
		int CountStructuresInFile() {
			FILE* file;
			S_Data data;
			file = fopen("another_data\\questions.bin", "rb");
			int count = 0;

			while (fread(&data, sizeof(data), 1, file) == 1) {
				count++;
			}

			fclose(file);
			return count;
		}





	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* file;
		S_Data data;
		if ((question_box->Text != "") && (question_A->Text != "") && (question_B->Text != "") && (question_C->Text != "") && (question_D->Text != ""))
		{
			strcpy(data.question,
				(char*)(void*)Marshal::StringToHGlobalAnsi(question_box->Text));
			strcpy(data.v1,
				(char*)(void*)Marshal::StringToHGlobalAnsi(question_A->Text));
			strcpy(data.v2,
				(char*)(void*)Marshal::StringToHGlobalAnsi(question_B->Text));
			strcpy(data.v3,
				(char*)(void*)Marshal::StringToHGlobalAnsi(question_C->Text));
			strcpy(data.v4,
				(char*)(void*)Marshal::StringToHGlobalAnsi(question_D->Text));
			int answer = what_answer();
			if (answer == 0) {
				MessageBox::Show("!", "Error");
			}
			else {
				data.answer = answer;

				
				clear_all_textBoxes();
				file = fopen("another_data\\questions.bin", "ab");
				fwrite(&data, sizeof(data), 1, file);
				fclose(file);
			}
		}
			this->total_questions_label->Visible = true;
			this->total_questions_label->Text = "Total - " + CountStructuresInFile().ToString();
	}
private: System::Void Questions_Load(System::Object^ sender, System::EventArgs^ e) {
	if (CountStructuresInFile() != 0) {
		this->total_questions_label->Visible = true;
		this->total_questions_label->Text = "Total - " + CountStructuresInFile().ToString();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* file;
	file = fopen("another_data\\questions.bin", "wb");
	fclose(file);
	this->total_questions_label->Visible = false;
	MessageBox::Show("Deleted succesfully!", "Succes!");
}
};
}
