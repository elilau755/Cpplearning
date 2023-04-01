#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

int i, j;
int x, y;
int a, b;
int point;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawPlane(int x, int y) {
    gotoxy(x, y); cout << "  _  ";
    gotoxy(x, y + 1); cout << "|_|_|";
    gotoxy(x, y + 2); cout << " _|_ ";
}

void erasePlane(int x, int y) {
    gotoxy(x, y); cout << "     ";
    gotoxy(x, y + 1); cout << "     ";
    gotoxy(x, y + 2); cout << "     ";
}

void drawBullet(int a, int b) {
    gotoxy(a, b); cout << "|";
}

void eraseBullet(int a, int b) {
    gotoxy(a, b); cout << " ";
}

void drawEnemy(int a, int b) {
    gotoxy(a, b); cout << "\\o/";
}

void eraseEnemy(int a, int b) {
    gotoxy(a, b); cout << "   ";
}

int main() {
    srand((unsigned int)time(NULL));
    x = 10; y = 20; a = 0; b = 0; point = 0;

    while (1) {

        drawPlane(x, y);

        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'a')x--;
            if (ch == 'd')x++;
            if (ch == 'w')y--;
            if (ch == 's')y++;
            if (ch == ' ')a = x + 2; b = y - 1;
        }
        erasePlane(x, y);

        drawBullet(a, b);
        eraseBullet(a, b);
        b--;

        drawEnemy(i, j);
        eraseEnemy(i, j);
        j++;

        if (j > 20) { i = rand() % 20; j = 0; }

        gotoxy(30, 5); cout << point;

        if (b == j && (a == i || a == i + 1 || a == i + 2)) { point++; eraseEnemy(i, j); }

        Sleep(100);

    }
    return 0;
}