// addstr.c
#include <ncurses.h>

int main()
{
    initscr();
    raw();
    noecho();
    
    mvaddstr(12, 0, "Hello world!");
    
    refresh();
    getch();
    endwin();
    return 0;
}
