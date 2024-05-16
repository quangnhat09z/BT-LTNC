#include <iostream>

using namespace std;
const int n = 6;
int a[n][n];

void inputArray(int a[][n], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

int smallSum(int a[][n], int i, int j) {
    int sum = 0;
    for (int x = i - 1; x <= i + 1; x++) {
        for (int y = j - 1; y <= j + 1; y++) {
            sum += a[x][y];
        }
    }
    return sum - (a[i][j - 1] + a[i][j + 1]);
}


int answer(int a[][n]) {
    int maxx = -999;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            maxx = max(maxx, smallSum(a, i, j));
        }
    }
    return maxx;
}

int main() {
    inputArray(a, n);
    cout << answer(a);

    return 0;
}
