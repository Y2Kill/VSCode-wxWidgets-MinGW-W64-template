#include "main.h"
#include "border.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Border *border = new Border(wxT("Border"));
    border->Show(true);

    return true;
}