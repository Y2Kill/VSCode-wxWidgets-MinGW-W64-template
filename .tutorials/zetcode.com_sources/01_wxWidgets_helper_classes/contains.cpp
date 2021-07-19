#include <wx/crt.h> // I had to add this cause wxPuts didn't want to work without it
#include <wx/string.h>

int main(int argc, char **argv)
{

  wxString str = wxT("The history of my life");

  if (str.Contains(wxT("history"))) {
      wxPuts(wxT("Contains!"));
  }


  if (!str.Contains(wxT("plain"))) {
      wxPuts(wxT("Does not contain!"));
  }

}