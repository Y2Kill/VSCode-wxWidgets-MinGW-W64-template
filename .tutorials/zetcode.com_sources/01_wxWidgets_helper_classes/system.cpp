// this code throws error during execution. but gives correct output but ONLY in debug build. Release build just throws error.
#include <wx/crt.h> // I had to add this cause wxPrintf didn't want to work without it
#include <wx/string.h>
#include <wx/utils.h>

int main(int argc, char **argv)
{
  wxPuts(wxGetHomeDir());
  wxPuts(wxGetOsDescription());
  wxPuts(wxGetUserName());
  wxPuts(wxGetFullHostName());

  long mem = wxGetFreeMemory().ToLong();

  wxPrintf(wxT("Memory: %ld\n"), mem);
}