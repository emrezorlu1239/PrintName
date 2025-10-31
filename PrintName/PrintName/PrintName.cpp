

#include <iostream>
using namespace std;

int rows = 12;
int width = 10;

void printE(int i) {
    for (int j = 0; j < width; j++) {
        if (i < 2 || i >= rows - 2 || i == rows / 2)
            cout << "*";
        else if (j == 0)
            cout << "*";
        else
            cout << " ";
    }
}

void printM(int i) {
    for (int j = 0; j < width; j++) {
        if (j == 0 || j == width - 1)
            cout << "*";
        else if (i == j && j <= width / 2)
            cout << "*";
        else if (i + j == width - 1 && j >= width / 2)
            cout << "*";
        else
            cout << " ";
    }
}

void printR(int i) {
    int mid = rows / 2;
    for (int j = 0; j < width; j++) {
        if (j == 0)
            cout << "*";
        else if (i == 0 || i == mid)
            cout << "*";
        else if (j == width - 1 && i < mid)
            cout << "*";
        else if (i > mid && j == i - mid)
            cout << "*";
        else
            cout << " ";
    }
}

int main() {
    for (int i = 0; i < rows; i++) {
        printE(i); cout << "  ";
        printM(i); cout << "  ";
        printR(i); cout << "  ";
        printE(i);
        cout << endl;
    }
    return 0;
}

