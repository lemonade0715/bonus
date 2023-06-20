// getch.c
#include <string.h>
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    
    printw("Enter a character: ");
    int ch = getch();
    printw("\nYou entered '%c'\n", ch);
    
    refresh();
    getch();
    endwin();
    return 0;
}
