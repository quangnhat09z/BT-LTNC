#include <iostream>

using namespace std;

void inputArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void caesarCipher(char arr[], int n, int k) {


    for (int i = 0; i < n; i++) {
        if (arr[i] >= 97 and arr[i] <= 122) {
            int add1 = (int(arr[i]) - 97 + k) % 26 + 97;
            cout << char(add1);
        } else if (arr[i] >= 65 and arr[i] <= 90) {
            int add2 = (int(arr[i]) - 65 + k) % 26 + 65;
            cout << char(add2);
        } else {
            cout << arr[i];
        }
    }
}


int main() {
    int n;
    cin >> n;
    char arr[n];
    inputArray(arr, n);
    int k;
    cin >> k;
    caesarCipher(arr, n, k);


    return 0;
}

