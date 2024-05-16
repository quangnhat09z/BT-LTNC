#include <iostream>

using namespace std;

string binaryNumber(int n) {
    string s = "";
    while (n > 0) {
        int digit = n % 2;
        s = to_string(digit) + s;
        n /= 2;
    }
    return s;
}

int countBit1(string str) {
    int maxxCount = 0;
    for (int i = 0; i < str.size(); i++) {
        int count = 1;
        while (i < str.length() and str[i] == str[i + 1]) {
            count++;
            i++;
        }
        maxxCount = max(count, maxxCount);
    }
    return maxxCount;
}

int main() {
    int n;
    cin >> n;
    cout << countBit1(binaryNumber(n));
    return 0;
}

