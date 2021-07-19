// this code throws error during execution. but gives correct output but ONLY in debug build. Release build just throws error.
#include <wx/crt.h> // I had to add this cause wxPrintf and wxPuts didn't want to work without it
#include <wx/textfile.h>

int main(int argc, char **argv)
{

  wxTextFile file(wxT("test.c"));

  file.Open();

  wxPrintf(wxT("Number of lines: %d\n"), file.GetLineCount());
  wxPrintf(wxT("First line: %s\n"), file.GetFirstLine().c_str());
  wxPrintf(wxT("Last line: %s\n"), file.GetLastLine().c_str());

  wxPuts(wxT("-------------------------------------"));

  wxString s;

  for ( s = file.GetFirstLine(); !file.Eof(); 
      s = file.GetNextLine() )
  {
       wxPuts(s);
  }

  file.Close();
}