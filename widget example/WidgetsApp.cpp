#include "WidgetsApp.h"

wxIMPLEMENT_APP(WidgetsApp);

WidgetsApp::WidgetsApp() 
{

}
WidgetsApp::~WidgetsApp()
{

}
bool WidgetsApp::OnInit() 
{
	m_frame1 = new cMain();
	m_frame1->Show();
	return true;
}