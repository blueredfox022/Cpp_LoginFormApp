#include "LoginForm.h"
#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(0/*false*/);

	LoginFormApp::LoginForm loginForm;

	loginForm.ShowDialog();

	User^ user = loginForm.user;

	if (user != nullptr) {
	
		MessageBox::Show("Login Succesfull", "Program.cpp", MessageBoxButtons::OK);
		LoginFormApp::MainForm mainform(user);
		Application::Run(% mainform);
	
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}

	return 0;

}
