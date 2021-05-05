#include <curses.h>
main()
{
  initscr();
  addstr("Everything\n");
  refresh();
  endwin();
  return 0;
}
