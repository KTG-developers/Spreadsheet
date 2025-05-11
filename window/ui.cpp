#include <windows.h>
#include "window.h"
void menu(HWND hwnd){
HMENU hMenu = CreateMenu();
    HMENU hSubMenu = CreateMenu();
    
    AppendMenu(hSubMenu, MF_STRING, 1, TEXT("open"));
    AppendMenu(hSubMenu, MF_STRING, 2, TEXT("save"));
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hSubMenu, TEXT("file"));

    SetMenu(hwnd, hMenu);
}
