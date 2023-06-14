#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include "Structure.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> 
#include <ctime> 
#include <algorithm>
#include <iostream>
#include <fstream>
#include <regex>
#pragma once

namespace RTCW {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		String^ student;
		Test(String^ s)
		{
			student = s;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ left_button;
	protected:

	private: System::Windows::Forms::Button^ right_button;
	protected:

	private: System::Windows::Forms::Button^ button3;














	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ timer_label;


	private: System::Windows::Forms::Label^ questions_label;



	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::RichTextBox^ question_box;
	private: System::Windows::Forms::RichTextBox^ question_A;
	private: System::Windows::Forms::RichTextBox^ question_B;
	private: System::Windows::Forms::RichTextBox^ question_C;
	private: System::Windows::Forms::RichTextBox^ question_D;





	private: System::Windows::Forms::RadioButton^ answer_A;
	private: System::Windows::Forms::RadioButton^ answer_B;
	private: System::Windows::Forms::RadioButton^ answer_C;
	private: System::Windows::Forms::RadioButton^ answer_D;
	private: System::Windows::Forms::RadioButton^ answer_E;
	private: System::Windows::Forms::RichTextBox^ question_E;













	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->left_button = (gcnew System::Windows::Forms::Button());
			this->right_button = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer_label = (gcnew System::Windows::Forms::Label());
			this->questions_label = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->question_box = (gcnew System::Windows::Forms::RichTextBox());
			this->question_A = (gcnew System::Windows::Forms::RichTextBox());
			this->question_B = (gcnew System::Windows::Forms::RichTextBox());
			this->question_C = (gcnew System::Windows::Forms::RichTextBox());
			this->question_D = (gcnew System::Windows::Forms::RichTextBox());
			this->answer_A = (gcnew System::Windows::Forms::RadioButton());
			this->answer_B = (gcnew System::Windows::Forms::RadioButton());
			this->answer_C = (gcnew System::Windows::Forms::RadioButton());
			this->answer_D = (gcnew System::Windows::Forms::RadioButton());
			this->answer_E = (gcnew System::Windows::Forms::RadioButton());
			this->question_E = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// left_button
			// 
			this->left_button->Location = System::Drawing::Point(171, 395);
			this->left_button->Name = L"left_button";
			this->left_button->Size = System::Drawing::Size(75, 62);
			this->left_button->TabIndex = 0;
			this->left_button->Text = L"previous";
			this->left_button->UseVisualStyleBackColor = true;
			this->left_button->Click += gcnew System::EventHandler(this, &Test::left_button_Click);
			// 
			// right_button
			// 
			this->right_button->Location = System::Drawing::Point(408, 395);
			this->right_button->Name = L"right_button";
			this->right_button->Size = System::Drawing::Size(75, 62);
			this->right_button->TabIndex = 1;
			this->right_button->Text = L"next";
			this->right_button->UseVisualStyleBackColor = true;
			this->right_button->Click += gcnew System::EventHandler(this, &Test::right_button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(546, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"finish";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Test::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(274, 355);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 34);
			this->button4->TabIndex = 12;
			this->button4->Text = L"clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Test::button4_Click);
			// 
			// timer_label
			// 
			this->timer_label->AutoSize = true;
			this->timer_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timer_label->Location = System::Drawing::Point(567, 42);
			this->timer_label->Name = L"timer_label";
			this->timer_label->Size = System::Drawing::Size(50, 20);
			this->timer_label->TabIndex = 9;
			this->timer_label->Text = L"00:00";
			// 
			// questions_label
			// 
			this->questions_label->AutoSize = true;
			this->questions_label->Location = System::Drawing::Point(293, 28);
			this->questions_label->Name = L"questions_label";
			this->questions_label->Size = System::Drawing::Size(89, 16);
			this->questions_label->TabIndex = 29;
			this->questions_label->Text = L"Task Number";
			this->questions_label->Click += gcnew System::EventHandler(this, &Test::questions_label_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Test::timer1_Tick);
			// 
			// question_box
			// 
			this->question_box->Location = System::Drawing::Point(192, 51);
			this->question_box->Name = L"question_box";
			this->question_box->ReadOnly = true;
			this->question_box->Size = System::Drawing::Size(280, 55);
			this->question_box->TabIndex = 31;
			this->question_box->Text = L"";
			// 
			// question_A
			// 
			this->question_A->Location = System::Drawing::Point(192, 130);
			this->question_A->Name = L"question_A";
			this->question_A->ReadOnly = true;
			this->question_A->Size = System::Drawing::Size(280, 39);
			this->question_A->TabIndex = 31;
			this->question_A->Text = L"";
			// 
			// question_B
			// 
			this->question_B->Location = System::Drawing::Point(192, 175);
			this->question_B->Name = L"question_B";
			this->question_B->ReadOnly = true;
			this->question_B->Size = System::Drawing::Size(280, 39);
			this->question_B->TabIndex = 31;
			this->question_B->Text = L"";
			// 
			// question_C
			// 
			this->question_C->Location = System::Drawing::Point(192, 220);
			this->question_C->Name = L"question_C";
			this->question_C->ReadOnly = true;
			this->question_C->Size = System::Drawing::Size(280, 39);
			this->question_C->TabIndex = 31;
			this->question_C->Text = L"";
			// 
			// question_D
			// 
			this->question_D->Location = System::Drawing::Point(192, 265);
			this->question_D->Name = L"question_D";
			this->question_D->ReadOnly = true;
			this->question_D->Size = System::Drawing::Size(280, 39);
			this->question_D->TabIndex = 31;
			this->question_D->Text = L"";
			// 
			// answer_A
			// 
			this->answer_A->AutoSize = true;
			this->answer_A->Location = System::Drawing::Point(149, 140);
			this->answer_A->Name = L"answer_A";
			this->answer_A->Size = System::Drawing::Size(37, 20);
			this->answer_A->TabIndex = 32;
			this->answer_A->TabStop = true;
			this->answer_A->Text = L"A";
			this->answer_A->UseVisualStyleBackColor = true;
			// 
			// answer_B
			// 
			this->answer_B->AutoSize = true;
			this->answer_B->Location = System::Drawing::Point(149, 185);
			this->answer_B->Name = L"answer_B";
			this->answer_B->Size = System::Drawing::Size(37, 20);
			this->answer_B->TabIndex = 32;
			this->answer_B->TabStop = true;
			this->answer_B->Text = L"B";
			this->answer_B->UseVisualStyleBackColor = true;
			// 
			// answer_C
			// 
			this->answer_C->AutoSize = true;
			this->answer_C->Location = System::Drawing::Point(149, 230);
			this->answer_C->Name = L"answer_C";
			this->answer_C->Size = System::Drawing::Size(37, 20);
			this->answer_C->TabIndex = 32;
			this->answer_C->TabStop = true;
			this->answer_C->Text = L"C";
			this->answer_C->UseVisualStyleBackColor = true;
			// 
			// answer_D
			// 
			this->answer_D->AutoSize = true;
			this->answer_D->Location = System::Drawing::Point(148, 275);
			this->answer_D->Name = L"answer_D";
			this->answer_D->Size = System::Drawing::Size(38, 20);
			this->answer_D->TabIndex = 32;
			this->answer_D->TabStop = true;
			this->answer_D->Text = L"D";
			this->answer_D->UseVisualStyleBackColor = true;
			// 
			// answer_E
			// 
			this->answer_E->AutoSize = true;
			this->answer_E->Location = System::Drawing::Point(148, 320);
			this->answer_E->Name = L"answer_E";
			this->answer_E->Size = System::Drawing::Size(37, 20);
			this->answer_E->TabIndex = 32;
			this->answer_E->TabStop = true;
			this->answer_E->Text = L"E";
			this->answer_E->UseVisualStyleBackColor = true;
			this->answer_E->CheckedChanged += gcnew System::EventHandler(this, &Test::answer_E_CheckedChanged);
			// 
			// question_E
			// 
			this->question_E->Location = System::Drawing::Point(192, 310);
			this->question_E->Name = L"question_E";
			this->question_E->ReadOnly = true;
			this->question_E->Size = System::Drawing::Size(280, 39);
			this->question_E->TabIndex = 33;
			this->question_E->Text = L"Another answer";
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 469);
			this->Controls->Add(this->question_E);
			this->Controls->Add(this->answer_E);
			this->Controls->Add(this->answer_D);
			this->Controls->Add(this->answer_C);
			this->Controls->Add(this->answer_B);
			this->Controls->Add(this->answer_A);
			this->Controls->Add(this->question_D);
			this->Controls->Add(this->question_C);
			this->Controls->Add(this->question_B);
			this->Controls->Add(this->question_A);
			this->Controls->Add(this->question_box);
			this->Controls->Add(this->questions_label);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->timer_label);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->right_button);
			this->Controls->Add(this->left_button);
			this->Name = L"Test";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Test";
			this->Load += gcnew System::EventHandler(this, &Test::Test_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int count = 1;

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
		int CountUsersStructuresInFile() {

			FILE* file;
			S_Data data;
			file = fopen("another_data\\user_answers.bin", "rb");
			int count = 0;

			while (fread(&data, sizeof(data), 1, file) == 1) {
				count++;
			}
			return count;
		}
		int CountRandStructuresInFile() {
			FILE* file;
			S_Data data;
			file = fopen("another_data\\rand_questions.bin", "rb");
			int count = 0;

			while (fread(&data, sizeof(data), 1, file) == 1) {
				count++;
			}
			return count;
		}


		void auto_check_radio(int answer) {
			if (answer == 1)
				answer_A->Checked = true;
			else if (answer == 2)
				answer_B->Checked = true;
			else if (answer == 3)
				answer_C->Checked = true;
			else if (answer == 4)
				answer_D->Checked = true;
			else if (answer == 5)
				answer_E->Checked = true;
			else;
		}
		void clear_check() {
			answer_A->Checked = false;
			answer_B->Checked = false;
			answer_C->Checked = false;
			answer_D->Checked = false;
			answer_E->Checked = false;
		}


		void setAnswerRight(int pos) {
			FILE* file;
			S_Data data;
			file = fopen("another_data\\user_answers.bin", "rb");
			fseek(file, pos * sizeof(data), SEEK_SET);

			if (fread(&data, sizeof(data), 1, file) == 1) {
				auto_check_radio(data.answer);
			}
			else {
				clear_check();
			}
			fclose(file);
		}

		void StructurePositionRight(int pos) {
			FILE* file;
			S_Data data;
			file = fopen("another_data\\rand_questions.bin", "rb");
			fseek(file, pos * sizeof(data), SEEK_SET); 
			if (fread(&data, sizeof(data), 1, file) == 1) {
				question_box->Text = marshal_as<String^>(data.question);
				question_A->Text = marshal_as<String^>(data.v1);
				question_B->Text = marshal_as<String^>(data.v2);
				question_C->Text = marshal_as<String^>(data.v3);
				question_D->Text = marshal_as<String^>(data.v4);
			}
			else {
				right_button->Enabled = false;
			}
			fclose(file);
		}	



		void StructurePositionLeft(int pos) {
			FILE* file;
			S_Data data;
			file = fopen("another_data\\rand_questions.bin", "rb");
			fseek(file, pos * sizeof(data), SEEK_SET);

			if (fread(&data, sizeof(data), 1, file) == 1) {
				question_box->Text = marshal_as<String^>(data.question);
				question_A->Text = marshal_as<String^>(data.v1);
				question_B->Text = marshal_as<String^>(data.v2);
				question_C->Text = marshal_as<String^>(data.v3);
				question_D->Text = marshal_as<String^>(data.v4);
			}
			else {
				left_button->Enabled = false;
			}
			fclose(file);
		}
		
		void setAnswerLeft(int pos) {
			FILE* file;
			S_Data data;
			file = fopen("another_data\\user_answers.bin", "rb");
			fseek(file, pos * sizeof(data), SEEK_SET);

			if (fread(&data, sizeof(data), 1, file) == 1) {
				auto_check_radio(data.answer);
			}
			else {
				left_button->Enabled = false;
			}
			fclose(file);
		}



	int currentPos = 0;
	int totalStructures = 0;


	int time = 0;
	int what_answer() {
		if (answer_A->Checked == true) {
			return 1;
		}
		else if (answer_B->Checked == true) {
			return 2;
		}
		else if (answer_C->Checked == true) {
			return 3;
		}
		else if (answer_D->Checked == true) {
			return 4;
		}
		else if (answer_E->Checked == true) {
			return 5;
		}
		else
			return 0;
	}


	static bool QuestionComparer(const question& q1, const question& q2) {
		return std::strcmp(q1.question, q2.question) < 0;
	}

private: System::Void Test_Load(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval = 1000;
	timer1->Start();
	FILE* file;
	S_Data data;
	file = fopen("another_data\\rand_questions.bin", "rb");
	fread(&data, sizeof(data), 1, file);
	question_box->Text = marshal_as<String^>(data.question);
	question_A->Text = marshal_as<String^>(data.v1);
	question_B->Text = marshal_as<String^>(data.v2);
	question_C->Text = marshal_as<String^>(data.v3);
	question_D->Text = marshal_as<String^>(data.v4);

	fclose(file);
	totalStructures = CountStructuresInFile();
	if (totalStructures <= 1) {
		right_button->Enabled = false;
		left_button->Enabled = false;
	}
	else {
		right_button->Enabled = true;
		left_button->Enabled = false;
	}
	this->questions_label->Text = "Task " + count.ToString() + " / " + CountRandStructuresInFile().ToString();
	if (count >= CountRandStructuresInFile()) {
		right_button->Enabled = false;
	}

	Test_Data testreq;
	file = fopen("another_data\\test_settings.txt", "r");
	fread(&testreq, sizeof(testreq), 1, file);
	fclose(file);
	time = testreq.question_time;



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void right_button_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* file;
		S_Data data;
		if (what_answer() != 0)
		{
			strcpy(data.question, (char*)(void*)Marshal::StringToHGlobalAnsi(question_box->Text));
			strcpy(data.v1, (char*)(void*)Marshal::StringToHGlobalAnsi(question_A->Text));
			strcpy(data.v2, (char*)(void*)Marshal::StringToHGlobalAnsi(question_B->Text));
			strcpy(data.v3, (char*)(void*)Marshal::StringToHGlobalAnsi(question_C->Text));
			strcpy(data.v4, (char*)(void*)Marshal::StringToHGlobalAnsi(question_D->Text));

			int answer = what_answer();
			data.answer = answer;

			file = fopen("another_data\\user_answers.bin", "r+b");
			if (file != NULL) {
				fseek(file, currentPos * sizeof(data), SEEK_SET);
				fwrite(&data, sizeof(data), 1, file); 
				fclose(file);
			}

			++count;
			this->questions_label->Text = "Task " + count.ToString() + " / " + CountRandStructuresInFile().ToString();
			if (currentPos < totalStructures) {
				currentPos++;

				StructurePositionRight(currentPos);
				left_button->Enabled = true;

				if (currentPos >= totalStructures - 1) {
					right_button->Enabled = false;
				}
				if (count == CountRandStructuresInFile()) {
					right_button->Enabled = false;
				}
			}
		}
		else {
			MessageBox::Show("answer isn`t choosen!", "Error");
		}
		file = fopen("another_data\\user_answers.bin", "rb");
		if (fread(&data, sizeof(data), 1, file) == 1) {
			fread(&data, sizeof(data), 1, file);
			setAnswerRight(currentPos);
		}

		fclose(file);

	}
private: System::Void left_button_Click(System::Object ^ sender, System::EventArgs ^ e) {
	FILE* file;
	S_Data data;
	if (currentPos > 0) {
		currentPos--; 
		StructurePositionLeft(currentPos);
		right_button->Enabled = true;

		if (currentPos <= 0) {
			left_button->Enabled = false;
		}
		count--;
		this->questions_label->Text = "Task " + count.ToString() + " / " + CountRandStructuresInFile().ToString();
	}
	file = fopen("another_data\\user_answers.bin", "rb");
	if (fread(&data, sizeof(data), 1, file) == 1) {
		fread(&data, sizeof(data), 1, file);
		setAnswerLeft(currentPos);
	}
	fclose(file);

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // end button
	FILE* file;
	Test_Data testreq;
	S_Data data;

	if (right_button->Enabled == false) {
		timer1->Stop();
		strcpy(data.question, (char*)(void*)Marshal::StringToHGlobalAnsi(question_box->Text));
		strcpy(data.v1, (char*)(void*)Marshal::StringToHGlobalAnsi(question_A->Text));
		strcpy(data.v2, (char*)(void*)Marshal::StringToHGlobalAnsi(question_B->Text));
		strcpy(data.v3, (char*)(void*)Marshal::StringToHGlobalAnsi(question_C->Text));
		strcpy(data.v4, (char*)(void*)Marshal::StringToHGlobalAnsi(question_D->Text));

		int answer = what_answer();
		data.answer = answer;

		file = fopen("another_data\\user_answers.bin", "r+b");
		if (file != NULL) {
			fseek(file, currentPos * sizeof(data), SEEK_SET);
			fwrite(&data, sizeof(data), 1, file);
			fclose(file);
		}
	}

	file = fopen("another_data\\test_settings.txt", "r");
	fread(&testreq, sizeof(testreq), 1, file);
	fclose(file);


	MessageBox::Show("Test is finished. Check results in \"results\"", "Well done!");
	this->Hide();

	std::ifstream inputFile("another_data\\questions.bin", std::ios::binary);
	if (!inputFile) {
		MessageBox::Show("Failed to open file.", "Error!");
	}
	std::vector<question> questions;
	question data1;

	while (inputFile.read(reinterpret_cast<char*>(&data1), sizeof(data1))) {
		questions.push_back(data1);
	}
	inputFile.close();

	std::ifstream inputFile2("another_data\\user_answers.bin", std::ios::binary);
	if (!inputFile2) {
		MessageBox::Show("Failed to open file.", "Error!");
	}

	std::vector<question> answers;
	question data2;

	while (inputFile2.read(reinterpret_cast<char*>(&data2), sizeof(data2))) {
		answers.push_back(data2);
	}
	inputFile2.close();


	std::sort(questions.begin(), questions.end(), QuestionComparer);
	std::sort(answers.begin(), answers.end(), QuestionComparer);


	double mark = 0;
	int count_mis = 0;
	int count_right = 0;
	size_t questionsSize = questions.size();
	size_t answersSize = answers.size();
	size_t i = 0;
	size_t j = 0;

	while (i < questionsSize && j < answersSize) {
		int comparison = std::strcmp(questions[i].question, answers[j].question);
		if (comparison == 0) {
			if (questions[i].answer == answers[j].answer) {
				mark += testreq.mark;
				count_right++;
			}
			else {
				count_mis++;
			}
			i++;
			j++;
		}
		else if (comparison < 0) {
			i++; 

		}
		else {
			j++; 
		}
	}
	std::ofstream outputFile("another_data\\result_testing.txt", std::ios::app); 

	if (outputFile) {
		std::string student_name_str;
		marshal_context context;
		student_name_str = context.marshal_as<std::string>(student);
		outputFile << "Login:" << student_name_str << std::endl;
		outputFile << "Questions:" << CountRandStructuresInFile() << std::endl;
		outputFile << "Correct:" << count_right << std::endl;
		if(count_mis == 0 && CountUsersStructuresInFile() < testreq.qc)
			count_mis = CountRandStructuresInFile() - count_right;
		outputFile << "Mistakes:" << count_mis << std::endl;
		outputFile << "Mark:" << mark << std::endl;
		outputFile << std::endl;
		outputFile.close();
	}
	else {
		MessageBox::Show("Failed to open file.", "Error!");
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	clear_check();
}
	   int timer_value = 0;
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			timer_value++;
			//timer_hv_label->Text = (timer_value / 60).ToString();
			//timer_sec_label->Text = (timer_value % 60).ToString();

			int minutes = timer_value / 60; 
			int seconds = timer_value % 60; 

			String^ formattedTime = "";

			if (minutes < 10) {
				formattedTime += "0";
			}

			formattedTime += minutes.ToString() + ":";

			if (seconds < 10) {
				formattedTime += "0"; 
			}

			formattedTime += seconds.ToString() + "";

			timer_label->Text = formattedTime;

			if (timer_value >= time * 60) {
				timer1->Stop();
				MessageBox::Show("Time`s up!", "Test is finished");

				FILE* file;
				Test_Data testreq;
				S_Data data;

				if (right_button->Enabled == false) {
					strcpy(data.question, (char*)(void*)Marshal::StringToHGlobalAnsi(question_box->Text));
					strcpy(data.v1, (char*)(void*)Marshal::StringToHGlobalAnsi(question_A->Text));
					strcpy(data.v2, (char*)(void*)Marshal::StringToHGlobalAnsi(question_B->Text));
					strcpy(data.v3, (char*)(void*)Marshal::StringToHGlobalAnsi(question_C->Text));
					strcpy(data.v4, (char*)(void*)Marshal::StringToHGlobalAnsi(question_D->Text));

					int answer = what_answer();
					data.answer = answer;

					file = fopen("another_data\\user_answers.bin", "r+b");
					if (file != NULL) {
						fseek(file, currentPos * sizeof(data), SEEK_SET);
						fwrite(&data, sizeof(data), 1, file);
						fclose(file);
					}
				}

				file = fopen("another_data\\test_settings.txt", "r");
				fread(&testreq, sizeof(testreq), 1, file);
				fclose(file);
					
				timer1->Stop();
				MessageBox::Show("Test is finished. Check results in \"results\"", "Well done!");
				this->Hide();

				std::ifstream inputFile("another_data\\questions.bin", std::ios::binary);
				if (!inputFile) {
					MessageBox::Show("Failed to open file.", "Error!");
				}
				std::vector<question> questions;
				question data1;

				while (inputFile.read(reinterpret_cast<char*>(&data1), sizeof(data1))) {
					questions.push_back(data1);
				}
				inputFile.close();

				std::ifstream inputFile2("another_data\\user_answers.bin", std::ios::binary);
				if (!inputFile2) {
					MessageBox::Show("Failed to open file.", "Error!");
				}

				std::vector<question> answers;
				question data2;

				while (inputFile2.read(reinterpret_cast<char*>(&data2), sizeof(data2))) {
					answers.push_back(data2);
				}
				inputFile2.close();


				std::sort(questions.begin(), questions.end(), QuestionComparer);
				std::sort(answers.begin(), answers.end(), QuestionComparer);


				double mark = 0;
				int count_mis = 0;
				int count_right = 0;
				size_t questionsSize = questions.size();
				size_t answersSize = answers.size();
				size_t i = 0;
				size_t j = 0;

				while (i < questionsSize && j < answersSize) {
					int comparison = std::strcmp(questions[i].question, answers[j].question);
					if (comparison == 0) {
						if (questions[i].answer == answers[j].answer) {
							mark += testreq.mark;
							count_right++;
						}
						else {
							count_mis++;
						}
						i++;
						j++;
					}
					else if (comparison < 0) {
						i++;

					}
					else {
						j++;
					}
				}
				std::ofstream outputFile("another_data\\result_testing.txt", std::ios::app);

				if (outputFile) {
					std::string student_name_str;
					marshal_context context;
					student_name_str = context.marshal_as<std::string>(student);
					outputFile << "Login:" << student_name_str << std::endl;
					outputFile << "Questions:" << CountRandStructuresInFile() << std::endl;
					outputFile << "Correct:" << count_right << std::endl;
					if (count_mis == 0 && CountUsersStructuresInFile() < testreq.qc)
						count_mis = CountRandStructuresInFile() - count_right;
					outputFile << "Mistakes:" << count_mis << std::endl;
					outputFile << "Mark:" << mark << std::endl;
					outputFile << std::endl;
					outputFile.close();
				}
				else {
					MessageBox::Show("Failed to open file.", "Error!");
				}

				this->Close();
			}
		}
private: System::Void questions_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void answer_E_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
