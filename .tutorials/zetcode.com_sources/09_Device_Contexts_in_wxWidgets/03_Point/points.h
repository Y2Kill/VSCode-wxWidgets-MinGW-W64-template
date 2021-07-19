#include <wx/wx.h>

class Points : public wxFrame
{
public:
    Points(const wxString & title);

    void OnPaint(wxPaintEvent & event);

};