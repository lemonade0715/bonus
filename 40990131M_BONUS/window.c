// window.c
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    
    WINDOW *myWin = newwin(10, 30, 5, 10);  // Create a new window
    box(myWin, 0, 0);                       // Draw border

    mvwprintw(myWin, 1, 1, "This is myWin!");
    refresh();
    wrefresh(myWin);

    getch();
    delwin(myWin);  // Delete the window
    endwin();
    return 0;
}
