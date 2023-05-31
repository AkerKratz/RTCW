#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RTCW::Main form;
	Application::Run(% form);
	return 0;
}
