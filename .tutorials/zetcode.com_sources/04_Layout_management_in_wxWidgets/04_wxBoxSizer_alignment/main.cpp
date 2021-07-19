#include "main.h"
#include "align.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Align *align = new Align(wxT("Align"));
    align->Show(true);

    return true;
}