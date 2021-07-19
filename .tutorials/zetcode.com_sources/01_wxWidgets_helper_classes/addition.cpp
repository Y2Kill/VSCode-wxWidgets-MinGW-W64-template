#include <wx/crt.h> // I had to add this cause wxPuts didn't want to work without it
#include <wx/string.h>

int main(int argc, char **argv)
{
  wxString str1 = wxT("Linux");
  wxString str2 = wxT("Operating");
  wxString str3 = wxT("System");

  wxString str = str1 + wxT(" ") + str2 + wxT(" ") + str3;

  wxPuts(str);
}