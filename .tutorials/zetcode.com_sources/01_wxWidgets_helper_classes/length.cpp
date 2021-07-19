// this code throws error during execution. but gives correct output but ONLY in debug build. Release build just throws error.
#include <wx/crt.h> // I had to add this cause wxPrintf didn't want to work without it
#include <wx/string.h>

int main(int argc, char **argv)
{
  wxString str = wxT("The history of my life");
  wxPrintf(wxT("The string has %d characters\n"), str.Len());
}