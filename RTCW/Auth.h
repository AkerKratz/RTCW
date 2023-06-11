#define _CRT_SECURE_NO_WARNINGS
#include "Main.h"
#include "AdMain.h"
#pragma once

namespace RTCW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Auth
	/// </summary>
	public ref class Auth : public System::Windows::Forms::Form
	{
	public:
		Auth(Void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ login_box;
	private: System::Windows::Forms::TextBox^ password_box;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->login_box = (gcnew System::Windows::Forms::TextBox());
			this->password_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Auth::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(389, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Auth::button2_Click);
			// 
			// login_box
			// 
			this->login_box->Location = System::Drawing::Point(288, 102);
			this->login_box->Name = L"login_box";
			this->login_box->Size = System::Drawing::Size(100, 22);
			this->login_box->TabIndex = 2;
			this->login_box->TextChanged += gcnew System::EventHandler(this, &Auth::textBox1_TextChanged);
			// 
			// password_box
			// 
			this->password_box->Location = System::Drawing::Point(288, 157);
			this->password_box->Name = L"password_box";
			this->password_box->Size = System::Drawing::Size(100, 22);
			this->password_box->TabIndex = 3;
			this->password_box->TextChanged += gcnew System::EventHandler(this, &Auth::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(317, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password";
			// 
			// Auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 395);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->password_box);
			this->Controls->Add(this->login_box);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Auth";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Auth";
			this->Load += gcnew System::EventHandler(this, &Auth::Auth_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = login_box->Text;
		this->Hide();
		AdMain^ admainForm = gcnew AdMain(name);

		String^ login = login_box->Text;
		String^ password = password_box->Text;

		bool isLoggedIn = false;

		// Перевірка авторизації адміна
		String^ adminFilename = "users_data/admin_login.txt";
		StreamReader^ adminFile = gcnew StreamReader(adminFilename);

		String^ adminLine;
		while ((adminLine = adminFile->ReadLine()) != nullptr) {
			array<String^>^ adminData = adminLine->Split(':');
			if (adminData->Length == 2 && login == adminData[0] && password == adminData[1]) {
				adminFile->Close();
				admainForm->ShowDialog();
				isLoggedIn = true;
				break;
			}
		}

		adminFile->Close();

		if (!isLoggedIn) {

			// Перевірка авторизації студента
			String^ studentFilename = "users_data/student_login.txt";
			StreamReader^ studentFile = gcnew StreamReader(studentFilename);

			String^ studentLine;
			while ((studentLine = studentFile->ReadLine()) != nullptr) {
				array<String^>^ studentData = studentLine->Split(':');
				if (studentData->Length == 2 && login == studentData[0] && password == studentData[1]) {
					
					studentFile->Close();
					
					isLoggedIn = true;
					Main^ mainForm = gcnew Main(login);
					mainForm->ShowDialog();
					
					break;
				}
			}

			studentFile->Close();
		}

		if (!isLoggedIn) {
			MessageBox::Show("Wrong login or password", "Authorization error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			login_box->Text = "";
			password_box->Text = "";
		}
		login_box->Text = "";
		password_box->Text = "";
		this->Show();
	}
	//private: System::Void register_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Register^ registerForm = gcnew Register();
		//registerForm->ShowDialog();
	//}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = login_box->Text;
		String^ password = password_box->Text;

		String^ studentFilename = "users_data/student_login.txt";
		StreamReader^ studentFile = gcnew StreamReader(studentFilename);

		bool isDuplicate = false;

		// Перевірка, чи існує вже вказаний логін у файлі
		String^ line;
		while ((line = studentFile->ReadLine()) != nullptr) {
			array<String^>^ data = line->Split(':');
			if (data->Length == 2 && login == data[0]) {
				isDuplicate = true;
				break;
			}
		}

		studentFile->Close();

		if (isDuplicate) {
			MessageBox::Show("This login already exists. Choose another login.", "Authorization error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			login_box->Text = "";
			password_box->Text = "";
		}
		else {
			// Додавання нового рядка з логіном та паролем до файлу
			StreamWriter^ writer = File::AppendText(studentFilename);
			writer->WriteLine(login + ":" + password);
			writer->Close();

			MessageBox::Show("Registration succed!", "Registration", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Очищення полів вводу
			login_box->Text = "";
			password_box->Text = "";
		}
	}
private: System::Void Auth_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	   
}
};
}
