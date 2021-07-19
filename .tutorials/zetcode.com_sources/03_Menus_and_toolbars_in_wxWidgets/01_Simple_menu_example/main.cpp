#include "main.h"
#include "menu.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    SimpleMenu *menu = new SimpleMenu(wxT("Simple Menu"));
    menu->Show(true);

    return true;
}