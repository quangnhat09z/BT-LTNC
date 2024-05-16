#include <iostream>

using namespace std;
int count = 0;

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                swap(a[j], a[i]);
                count++;
            }
        }
    }
}

void print(int a[], int n) {
    cout << "Array is sorted in " << count << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    inputArray(a, n);
    bubbleSort(a, n);
    print(a, n);
    return 0;
}
