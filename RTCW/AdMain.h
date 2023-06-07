#include "Test.h"
#include "Results.h"
#include "TestSet.h"
#include "Intro.h"
#include "Questions.h"
#include "Info.h"

#pragma once

namespace RTCW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdMain
	/// </summary>
	public ref class AdMain : public System::Windows::Forms::Form
	{
	public:
		String^ student;
		AdMain(String^ s)
		{
			student = s;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(467, 412);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdMain::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(467, 371);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Intro";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdMain::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(452, 328);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Results";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdMain::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(452, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Questions";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdMain::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(452, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Information";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdMain::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(452, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Test settings";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdMain::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(452, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Start Test";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdMain::button1_Click);
			// 
			// AdMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1011, 536);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AdMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdMain";
			this->Load += gcnew System::EventHandler(this, &AdMain::AdMain_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Test^ test = gcnew Test(student); // Create an instance of Form2
		this->Hide();
		test->ShowDialog(); // Show Form2
		this->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	TestSet^ testset = gcnew TestSet(); // Create an instance of Form2
	this->Hide();
	testset->ShowDialog(); // Show Form2
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Info^ infoForm = gcnew Info();
	this->Hide();
	infoForm->ShowDialog();
	this->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Questions^ questions = gcnew Questions(); // Create an instance of Form2
	this->Hide();
	questions->ShowDialog(); // Show Form2
	this->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Results^ results = gcnew Results(student); // Create an instance of Form2
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
private: System::Void AdMain_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
