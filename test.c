// test.c
#include <string.h>
#include <ncurses.h>

int main()
{
    initscr();
    raw();
    noecho();
    curs_set(0);
    
    char *ptr = "Hello world!\n";
    
    mvprintw(LINES/2, (COLS-strlen(ptr))/2, ptr);
    refresh();
    
    getch();
    endwin();
    
    return 0;
}
