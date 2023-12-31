#pragma once
#include "User.h"


namespace LoginFormApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;




	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(558, 97);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(142, 138);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(428, 39);
			this->tbEmail->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(145, 200);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(428, 39);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbPassword_TextChanged);
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::LimeGreen;
			this->btnOK->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnOK->Location = System::Drawing::Point(142, 318);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(214, 77);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::OrangeRed;
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCancel->Location = System::Drawing::Point(359, 318);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(214, 77);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(582, 453);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(600, 500);
			this->MinimumSize = System::Drawing::Size(600, 500);
			this->Name = L"LoginForm";
			this->Text = L"Login Form App";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}



	 // include from user header
	public: User^ user = nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Email or Password is Epmty", MessageBoxButtons::OK); 
			return;
		}
		try {
			String^ connString= "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=LoginFormApp;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, %sqlConn);

			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {

				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);


				this->Close();
			}
			else {

				MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}

		}
		catch(Exception^ e){
			MessageBox::Show("Failed to Connection database", "Database Connection Error", MessageBoxButtons::OK);
		}

	}
	private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
