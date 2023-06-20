// printw.c
#include <string.h>
#include <ncurses.h>

int main()
{
    initscr();
    raw();
    noecho();
    
    int row = 0, col = 0;
    getmaxyx(stdscr, row, col); // 取得視窗大小資訊
    char message[] = "Hello world!";
    // 移動 cursor 並將 message 印在視窗中央
    mvprintw(row/2, (col-strlen(message))/2, "%s", message);
    
    refresh();
    getch();
    endwin();
    return 0;
}
