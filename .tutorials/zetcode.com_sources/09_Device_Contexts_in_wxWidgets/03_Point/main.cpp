#include "main.h"
#include "points.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Points *points = new Points(wxT("Points"));
    points->Show(true);

    return true;
}