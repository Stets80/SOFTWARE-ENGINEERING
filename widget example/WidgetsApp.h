#pragma once
#include "wx/wx.h"
#include "cMain.h"

class WidgetsApp : public wxApp
{
	

public:
	WidgetsApp();
	~WidgetsApp();

private:
	cMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();

};

