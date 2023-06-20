// test.c
#include <ncurses.h>

int main()
{
    initscr();               // 初始化
    printw("Hello world!");  // 在螢幕上印出 Hello World!
    refresh();               // 更新視窗
    getch();                 // 等待使用者輸入
    endwin();                // 結束 curses 模式
    return 0;
}
