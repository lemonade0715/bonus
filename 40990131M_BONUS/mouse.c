// mouse.c
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    
    mouseinterval(0);
    mousemask(ALL_MOUSE_EVENTS, NULL);
    
    int ch = 0;
    MEVENT event;
    while ((ch == getch()) != 'q')
    {
        if (ch == KEY_MOUSE)
        {
            if (getmouse(&event) == OK)
            {
                if (event.bstate )
            }
        }
    }
    
    
    endwin();
    return 0;
}
