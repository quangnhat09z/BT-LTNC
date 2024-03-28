#include <iostream>

using namespace std;

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int lcm(int a, int b) {
    int x = a, y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return a * b / x;
}

int gcd(int a, int b) {
    int x = a, y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int gcdArray(int a[], int n) {
    if (n == 1) return a[0];
    else {
        int temp = gcd(a[0], a[1]);
        for (int i = 2; i < n; i++) {
            temp = gcd(temp, a[i]);
        }
        return temp;
    }
}

int lcmArray(int a[], int n) {
    if (n == 1) return a[0];
    else {
        int temp = lcm(a[0], a[1]);
        for (int i = 2; i < n; i++) {
            temp = lcm(temp, a[i]);
        }
        return temp;
    }
}

int check(int a[], int n, int b[], int m) {
    int x = lcmArray(a, n);
    int y = gcdArray(b, m);
    int count = 0;
    for (int i = 1; i * x <= y; i++) {
        if (y % (i * x) == 0) count++;
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    int b[m], a[n];

    inputArray(a, n);
    inputArray(b, m);

    cout << check(a, n, b, m);

    return 0;
}
