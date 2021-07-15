# VSCode-wxWidgets-MinGW-W64-template
Basic app tempplate with VSCode, wxWidgets and MinGW-W64

This is simple project template for VSCode, MinGW-W64 compiler and wxWidgets C++ framework

It was made with video tutorial [here](https://www.youtube.com/watch?v=tHMGA0jIl3Y)

To start using it you need:

1. VSCode;

2. MinGW-W64 compiler. I used [this] (https://winlibs.com/) version: GCC 11.1.0 + LLVM/Clang/LLD/LLDB 12.0.0 + MinGW-w64 9.0.0 - release 2

3. wxWidgets (better to compile it from sources).

copy wxbase316ud_gcc_custom.dll and wxmsw316ud_core_gcc_custom.dll from your wxWidgets "make-install" directory to the .\build\x64_debug\ directory
copy wxbase316u_gcc_custom.dll and wxmsw316u_core_gcc_custom.dll from your "make-install" directory to the .\build\x64_release\ directory
copy content of your wxWidgets "make-install" directory to .\deps\wxWidgets

In the .vscode/settings.json:

change "compilerPath" to your compiler bin directory

leave "wxWidgetsRoot" as is or change to your wxWidgets root directory (compiled of cource :))

That is all - just open template directory with VSCode.

All configurations done with json files inside .vscode directory just wathc video above to understand configs.
