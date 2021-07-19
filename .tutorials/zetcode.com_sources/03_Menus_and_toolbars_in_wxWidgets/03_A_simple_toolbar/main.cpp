#include "main.h"
#include "toolbar.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit() {

    Toolbar *toolbar = new Toolbar(wxT("Toolbar"));
    toolbar->Show(true);

    return true;
}