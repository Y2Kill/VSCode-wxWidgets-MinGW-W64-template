#include "main.h"
#include "icon.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Icon *icon = new Icon(wxT("Icon"));
    icon->Show(true);

    return true;
}