#include <iostream>
#include <vector>

using namespace std;

bool checkPalindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

string erase(string s, int n) {
    s.erase(s.begin() + n);
    return s;
}

void check(string s) {

    if (checkPalindrome(s)) cout << "-1";
    else {
        for (int i = 0; i < s.length(); i++) {
            if (checkPalindrome(erase(s, i))) {
                cout << i;
                break;
            }
        }
    }
}

int main() {

    int k;
    cin >> k;
    vector<string> input(k);

    for (int i = 0; i < k; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < k; i++) {
        check(input[i]);
        cout << endl;
    }
    return 0;

}

