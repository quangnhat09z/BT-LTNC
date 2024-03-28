#include <iostream>
#include <string>
#include <vector>

using namespace std;

void inputString(vector<string> &S, int k) {
    S.resize(k);
    for (int i = 0; i < k; i++) {
        cin >> S[i];
    }
}

bool checkContainsString(string str) {
    string wordCheck = "hackerrank";
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == wordCheck[j]) {
            j++;
        }
        if (j == wordCheck.length() - 1) {
            return true;
        }
    }
    return false;

}

void procedure(string str) {
    if (checkContainsString(str)) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
}

int main() {
    int k;
    cin >> k;
    vector<string> S;
    inputString(S, k);
    for (int i = 0; i < k; i++) {
        checkContainsString(S[i]);
        procedure(S[i]);
    }

    return 0;
}
