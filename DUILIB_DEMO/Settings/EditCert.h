#pragma once

#include <windows.h>
#include "my_including.h"
#include "my_duilib.h"
#include "VM661JTcpDLL.h"
#include "my_log.h"
#include "sqlite_utils.h"
#include "atlbase.h" 
#include "atlstr.h"
#include "str_utils.h"

class CEditCertWnd : public CXMLWnd {
public:
	explicit CEditCertWnd(LPCTSTR xml_path, string id, string name, string content, string date, string type);

	virtual void InitWindow();
	virtual void Notify(TNotifyUI& msg);
	virtual CControlUI* CreateControl(LPCTSTR pstrClassName);
	virtual void OnFinalMessage(HWND hWnd);
private:
	string id;
	string name;
	string date;
	string type;
};

void  createEditCertWin(string id, string name, string content, string date, string type);