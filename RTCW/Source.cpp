#include "Auth.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RTCW::Auth form;
	Application::Run(% form);
	return 0;
}
