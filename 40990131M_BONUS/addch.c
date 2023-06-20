// addch.c
#include <ncurses.h>

int main()
{
    initscr();
    raw();
    noecho();
    
    move(12, 40);  // Move cursor to row 12, column 40
    addch('*');    // Add the character '*' at the current cursor position
    
    refresh();
    getch();
    endwin();
    return 0;
}
