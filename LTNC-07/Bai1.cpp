#include <iostream>

using namespace std;

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int binarySearch(int a[], int low, int high, int x) {
    int mid = (high + low) / 2;
    if (low > high) return -1;
    if (a[mid] == x) return mid;
    else if (a[mid] < x) return binarySearch(a, mid + 1, high, x);
    else return binarySearch(a, low, mid - 1, x);
}

int main() {
    int n, x;
    cin >> n;
    int a[n];
    inputArray(a, n);
    cin >> x;
    cout << binarySearch(a, 0, n - 1, x);
    return 0;
}
