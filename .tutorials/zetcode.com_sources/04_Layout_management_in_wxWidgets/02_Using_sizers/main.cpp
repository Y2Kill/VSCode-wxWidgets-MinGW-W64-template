#include "main.h"
#include "sizer.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Sizer *sizer = new Sizer(wxT("Sizer"));
    sizer->Show(true);

    return true;
}