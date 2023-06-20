// attribute.c
#include <string.h>
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    
    attron(A_BOLD);         // Enable the Bold Attribute
    mvprintw(4, 8, "1");
    attron(A_UNDERLINE);    // Enable the Underlining Attribute
    mvprintw(8, 4, "2");
    attroff(A_BOLD);        // Disable the Bold Attribute
    mvprintw(12, 0, "3");
    attrset(A_REVERSE);     // Set to Reverse Attribute
    mvprintw(16, 12, "4");
    attrset(A_NORMAL);      // Set to Normal Attribute
    mvprintw(20, 0, "5");
    
    refresh();
    getch();
    endwin();
    return 0;
}
