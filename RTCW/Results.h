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

	/// <summary>
	/// Summary for Results
	/// </summary>
	public ref class Results : public System::Windows::Forms::Form
	{
	public:

		String^ student;

		Results(String^ s)
		{

			student = s;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Results()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name_label;
	protected:

	private: System::Windows::Forms::Label^ mark_label;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ correct_mis_label;

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
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->mark_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->correct_mis_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_label->Location = System::Drawing::Point(213, 42);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(81, 25);
			this->name_label->TabIndex = 0;
			this->name_label->Text = L"Name: ";
			// 
			// mark_label
			// 
			this->mark_label->AutoSize = true;
			this->mark_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mark_label->Location = System::Drawing::Point(448, 42);
			this->mark_label->Name = L"mark_label";
			this->mark_label->Size = System::Drawing::Size(82, 25);
			this->mark_label->TabIndex = 1;
			this->mark_label->Text = L"Score: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(262, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Results::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(229, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CORRECT/MISTAKES";
			// 
			// correct_mis_label
			// 
			this->correct_mis_label->AutoSize = true;
			this->correct_mis_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->correct_mis_label->Location = System::Drawing::Point(310, 263);
			this->correct_mis_label->Name = L"correct_mis_label";
			this->correct_mis_label->Size = System::Drawing::Size(43, 25);
			this->correct_mis_label->TabIndex = 1;
			this->correct_mis_label->Text = L"0/0";
			// 
			// Results
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 540);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->correct_mis_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mark_label);
			this->Controls->Add(this->name_label);
			this->Name = L"Results";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Results";
			this->Load += gcnew System::EventHandler(this, &Results::Results_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int CountRandStructuresInFile() {
			FILE* file;
			S_Data data;
			file = fopen("C:\\Users\\akerk\\source\\repos\\RTCW\\RTCW\\another_data\\rand_questions.bin", "rb");
			int count = 0;

			while (fread(&data, sizeof(data), 1, file) == 1) {
				count++;
			}
			return count;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


private: System::Void Results_Load(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file1("C:\\Users\\akerk\\source\\repos\\RTCW\\RTCW\\another_data\\result_testing.txt");
	std::regex loginRegex(R"(.*login:(.+))", std::regex_constants::icase);
	std::regex dataRegex(R"(.*(Questions|Correct|Mistakes|Mark):(\d+))", std::regex_constants::icase);

	std::string login;
	int closestQuestions = 0;
	int closestCorrect = 0;
	int closestMistakes = 0;
	int closestMark = 0;

	std::string line;
	while (std::getline(file1, line)) {
		std::smatch match;

		if (std::regex_search(line, match, loginRegex)) {
			login = match[1].str();
			continue; // Продовжуємо до наступного рядка після знаходження логіну
		}

		String^ student_login = msclr::interop::marshal_as<String^>(login);
		if (student_login == student) {
			if (std::regex_search(line, match, dataRegex)) {
				std::string term = match[1].str();
				int value = std::stoi(match[2].str());

				if (term == "Correct") {
					if (closestCorrect == 0 || std::abs(value - closestCorrect) < std::abs(value - closestCorrect)) { // перевіряється, чи нове значення помилок value ближче до поточного найближчого значення помилок closestMistakes
						closestCorrect = value;
					}
				}
				else if (term == "Mistakes") {
					if (closestMistakes == 0 || std::abs(value - closestMistakes) < std::abs(value - closestMistakes)) { // перевіряється, чи нове значення помилок value ближче до поточного найближчого значення помилок closestMistakes
						closestMistakes = value;
					}
				}
				else if (term == "Mark") {
					int roundedMark = static_cast<int>(std::round(value)); // Округлити значення Mark до цілого числа
					if (closestMark == 0 || std::abs(roundedMark - closestMark) < std::abs(roundedMark - closestMark)) { // перевіряється, чи нове значення оцінки value ближче до поточного найближчого значення оцінки closestMark
						closestMark = roundedMark;
					}
				}
			}
		}
	}

	int mark = closestMark;
	int correct = closestCorrect;
	int mistakes = closestMistakes;

	mark_label->Text = "Score: " + mark.ToString();
	name_label->Text = "Name: " + student;

	correct_mis_label->Text = correct.ToString() + "/" + mistakes.ToString();

	file1.close();
}
};
}
