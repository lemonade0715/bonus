// keyboard.c
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    
    keypad(stdscr, TRUE);  // 啟用偵測按鍵
    mvprintw(1, 0, "Press the arrow keys. Press 'q' to quit.");
    move(3, 0);
    
    int ch = 0;
    while ((ch = getch()) != 'q')
    {
        switch (ch)
        {
            case KEY_LEFT:
                printw("Left arrow key is pressed.\n");
                break;
            case KEY_RIGHT:
                printw("Right arrow key is pressed.\n");
                break;
            case KEY_UP:
                printw("Up arrow key is pressed.\n");
                break;
            case KEY_DOWN:
                printw("Down arrow key is pressed.\n");
                break;
            default:
                printw("Unknown key is pressed.\n");
                break;
        }
        refresh();
    }
    
    endwin();
    return 0;
}
