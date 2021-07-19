#include <wx/crt.h> // I had to add this cause wxPuts didn't want to work without it
#include <wx/string.h>

int main(int argc, char **argv)
{
  wxString str = wxT("The history of my life");

  wxPuts(str.MakeLower());
  wxPuts(str.MakeUpper());
}