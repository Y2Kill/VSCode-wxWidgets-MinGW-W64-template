#include <wx/crt.h> // I had to add this cause wxPuts didn't want to work without it
#include <wx/string.h>

int main(int argc, char **argv)
{
  wxPuts(wxT("A wxWidgets console application"));
}