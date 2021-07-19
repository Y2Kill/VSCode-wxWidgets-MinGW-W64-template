#include "text.h"


Text::Text(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
  Connect(wxEVT_PAINT, wxPaintEventHandler(Text::OnPaint));
  Centre();
}

void Text::OnPaint(wxPaintEvent& event)
{
  wxPaintDC dc(this);

  dc.DrawText(wxT("Лев Николaевич Толстoй"), 40, 60);
  dc.DrawText(wxT("Анна Каренина"), 70, 80);
}