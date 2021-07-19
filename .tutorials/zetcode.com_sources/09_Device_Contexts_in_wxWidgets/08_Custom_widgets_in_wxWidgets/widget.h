#ifndef WIDGET_H
#define WIDGET_H

#include <wx/wx.h>

class Widget : public wxPanel
{
public:
  Widget(wxPanel *parent, int id );

  wxPanel *m_parent;


  void OnSize(wxSizeEvent& event);
  void OnPaint(wxPaintEvent& event);  

};

#endif