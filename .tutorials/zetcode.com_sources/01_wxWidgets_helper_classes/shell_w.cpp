// this is Windows only example!
// this code throws error during execution. but gives correct output but ONLY in debug build. Release build just throws error.
#include <wx/string.h>
#include <wx/utils.h>

int main(int argc, char **argv)
{

  wxShell(wxT("dir"));

}