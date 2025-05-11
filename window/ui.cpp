#include <windows.h>
#include "window.h"
void menu(HWND hwnd){
HMENU hMenu = CreateMenu();
    HMENU hSubMenu = CreateMenu();
    
    AppendMenu(hSubMenu, MF_STRING, 1, TEXT("Open"));
    AppendMenu(hSubMenu, MF_STRING, 2, TEXT("Save"));
    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hSubMenu, TEXT("File"));

    SetMenu(hwnd, hMenu);
}
