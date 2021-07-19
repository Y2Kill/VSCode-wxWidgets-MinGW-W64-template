#include <wx/crt.h> // I had to add this cause wxPuts didn't want to work without it
#include <wx/dir.h>
#include <wx/filefn.h>

int main(int argc, char **argv)
{

  wxDir dir(wxGetCwd());

  wxString file;

  bool cont = dir.GetFirst(&file, wxEmptyString,
      wxDIR_FILES | wxDIR_DIRS);

  while (cont) {
      wxPuts(file);
      cont = dir.GetNext(&file);
  }
}