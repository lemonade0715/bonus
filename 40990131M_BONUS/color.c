// color.c
#include <stdlib.h>
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    
    // Check if the terminal support color
    if (has_colors() == FALSE)
    {
        endwin();
        printf("Your terminal does not support color.\n");
        exit(1);
    }
    
    // Initialize color settings
    start_color();
    init_pair(1, COLOR_RED, COLOR_YELLOW);
    init_pair(2, COLOR_GREEN, COLOR_BLUE);
    
    int row = 0, col = 0, diag = 0;
    getmaxyx(stdscr, row, col);
    diag = (row < col) ? row : col;
    
    for (int i = 0; i < diag; i++)
    {
        attron(COLOR_PAIR(i % 3));
        mvaddch(i, i, '*');
        attroff(COLOR_PAIR(i % 3));
    }
    
    refresh();
    getch();
    endwin();
    return 0;
}
