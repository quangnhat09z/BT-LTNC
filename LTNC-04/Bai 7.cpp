#include <iostream>
#include <cstring>

using namespace std;

const int N = 1000;
char a[N][N];
bool check[N][N];

void inputArray(char a[][N], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
}

void start(char a[][N], bool check[][N], int row, int col) {
    memset(check, false, sizeof(check));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] == 'Y') check[i][j] = true;
        }
    }
}

void copyToCheckBoard(char a[][N], bool check[][N], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (check[i][j] and a[i][j + 1] == 'E' and a[i + 1][j + 1] == 'E') check[i + 1][j + 1] = true;
            if (check[i][j] and a[i][j - 1] == 'E' and a[i + 1][j - 1] == 'E') check[i + 1][j - 1] = true;
            if (check[i][j] and a[i + 1][j] == 'E') check[i + 1][j] = true;
        }
    }
}

bool canAvoid(bool check[][N], int row, int col) {
    for (int j = 0; j < col; j++) {
        if (check[row - 1][j]) return true;
    }
    return false;
}

int main() {
    int row, col;
    cin >> col >> row;

    inputArray(a, row, col);
    start(a, check, row, col);
    copyToCheckBoard(a, check, row, col);
    if (canAvoid(check, row, col)) cout << "YES"; else cout << "NO";
    return 0;
}




