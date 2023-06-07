#define _CRT_SECURE_NO_WARNINGS
#include "Test.h"
#include "Results.h"
#include "Intro.h"
#include "InfoStudent.h"
#include "Test.h"
#include "Results.h"
#include "Structure.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <vector>
#include <cstdlib> 
#include <ctime> 
#include <algorithm>
#include <iostream>
#include <regex>
#include <random>
#pragma once

namespace RTCW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		String^ name;

		Main(String^ s)
		{
			name = s;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ name_label;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(348, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start Test";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(348, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Information";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(348, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Results";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(361, 288);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Intro";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(361, 334);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_label->Location = System::Drawing::Point(12, 9);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(81, 25);
			this->name_label->TabIndex = 7;
			this->name_label->Text = L"Name: ";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 541);
			this->Controls->Add(this->name_label);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int time = 0;
		private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
			name_label->Text = name;
			Test_Data testreq;
			FILE* file;
			file = fopen("another_data\\test_settings.txt", "r");
			fread(&testreq, sizeof(testreq), 1, file);
			fclose(file);
			time = testreq.question_time;
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		System::Windows::Forms::DialogResult result = MessageBox::Show("Do you want to start test?" + "You have" + time.ToString() + "minutes" , "Test", MessageBoxButtons::YesNo, MessageBoxIcon::Question);


		if (result == System::Windows::Forms::DialogResult::Yes) {
			std::ifstream file1("another_data\\result_testing.txt");
			std::regex loginRegex(R"(login:(.+))", std::regex_constants::icase);

			std::string login;


			std::string line;
			while (std::getline(file1, line)) {
				std::smatch match;

				if (std::regex_search(line, match, loginRegex)) {
					login = match[1];
				}
			}
			String^ login_r = marshal_as<String^>(login);


			if (login_r == name) {
				MessageBox::Show("You already complited the test!", "Error!");
			}
			else {
				FILE* file;
				Test_Data testreq;
				file = fopen("another_data\\user_answers.bin", "wb");
				fclose(file);
				std::ifstream inputFile("another_data\\questions.bin", std::ios::binary);
				if (!inputFile) {
					MessageBox::Show("Failed to open the file", "Error?");
				}
				std::vector<S_Data> questions;
				S_Data question;

				while (inputFile.read(reinterpret_cast<char*>(&question), sizeof(question))) {
					questions.push_back(question);
				}
				inputFile.close();

				std::vector<size_t> indices(questions.size());
				for (size_t i = 0; i < indices.size(); ++i) {
					indices[i] = i;
				}

				std::random_device rd;
				std::mt19937 generator(rd());
				std::shuffle(indices.begin(), indices.end(), generator);

				std::ofstream outputFile("another_data\\rand_questions.bin", std::ios::binary);

				file = fopen("another_data\\test_settings.txt", "r");
				fread(&testreq, sizeof(testreq), 1, file);
				fclose(file);

				for (size_t i = 0; i < testreq.qc; ++i) {
					const auto& q = questions[indices[i]];
					outputFile.write(reinterpret_cast<const char*>(&q), sizeof(q));
				}

				file1.close();
				outputFile.close();

				this->Hide();
				Test^ testForm = gcnew Test(name);
				testForm->ShowDialog();
				this->Show();
			}
		}
		}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		InfoStudent^ infoForm = gcnew InfoStudent();
		this->Hide();
		infoForm->ShowDialog();
		this->Show();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Results^ results = gcnew Results(name); // Create an instance of Form2
		this->Hide();
		results->ShowDialog(); // Show Form2
		this->Show();
}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Intro^ intro = gcnew Intro(); // Create an instance of Form2
		this->Hide();
		intro->ShowDialog(); // Show Form2
		this->Show();
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}
