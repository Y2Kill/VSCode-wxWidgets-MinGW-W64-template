#ifndef BURNING_H
#define BURNING_H

#include <wx/wx.h>
#include "widget.h"

class Burning : public wxFrame
{
public:
  Burning(const wxString& title);

  void OnScroll(wxScrollEvent& event);
  int GetCurWidth();

  
  wxSlider *m_slider;
  Widget *m_wid;

  int cur_width;

};

#endif