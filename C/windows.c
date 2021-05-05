#include <windows.h>

int PASCAL WinMain(HINSTANCE hInstance,
  HINSTANCE hPrevInstance, LPSTR CmdLine, int Show)
{
  MessageBox(GetActiveWindow(), "Everything", "Everything windows", MB_OK);
  return 0;
}
