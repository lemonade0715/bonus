// test.c
#include <string.h>
#include <ncurses.h>

int main()
{
    // 初始化
    initscr();
    // 在螢幕上印出 Hello World!
    printw("Hello world!");
    refresh();
    // 等待使用者輸入
    getch();
    // 關閉
    endwin();
    return 0;
}
