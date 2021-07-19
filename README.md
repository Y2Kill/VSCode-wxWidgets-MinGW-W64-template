# VSCode-wxWidgets-MinGW-W64-template
Basic application tempplate for VSCode. Used: wxWidgets and MinGW-W64

<u>Don't expect much of this template - I'm not "true" programmer.</u>

This is simple project template for VSCode with MinGW-W64 compiler and wxWidgets C++ framework.

This template was made with great help of video [this](https://www.youtube.com/watch?v=tHMGA0jIl3Y) tutorial.

I added .tutorials folder with some examples from [zetcode.com](https://zetcode.com/gui/wxwidgets/). Almost all of them just copypaste. I made some slight changes to make some of them work. Some examples use depricated features of wxWidgets and don' work as expected - not the worst sandbox to start playing I think :). 

To start using it you need:

1. VSCode;

2. MinGW-W64 compiler. I used [this](https://winlibs.com) version: GCC 11.1.0 + LLVM/Clang/LLD/LLDB 12.0.0 + MinGW-w64 9.0.0 - release 2

3. wxWidgets (better to buil it youself).

You can download a kind of "release" of this template with precompiled wxWidgets 3.1.x [here](https://github.com/Y2Kill/VSCode-wxWidgets-MinGW-W64-template/releases/tag/v1.0)

Or build and copy compilled wxWidgets DLLs into corresponding ./build/ directory.

The .vscode/settings.json file contains following settings:

- "compilerPath" - path to your compiler bin directory;

- "wxWidgetsRoot" - path to your wxWidgets root directory it points to "${workspaceFolder}\\deps\\wxWidgets" to make this template kind of "portable" change it if needed :);
- "wxWidgetsMonoRoot" - the same as "wxWidgetsRoot" but all DLLs compiled into single file (use it if you want to link single library and forget about it :).

The .vscode/settings.json file contains settings for four build types x_64 Debug (monolitic and nonmonolitic) and x_64 Release (monolitic and nonmonolitic).

That is all - just open template directory with VSCode and happy coding :).

If you find bugs or want me to add something to this template - fell free to make bug report or pull request.