#include <iostream>
#include <vector>

using namespace std;

void Count(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        int Number = stoi(s);
        int NumberLetter = s[i] - '0';

        if (NumberLetter != 0) {
            if (Number % NumberLetter == 0) {
                count += 1;
            }
        }
    }
    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    vector<string> input(T);

    for (int i = 0; i < T; i++) {
        cin >> input[i];
    }
    for (int i = 0; i < T; i++) {
        Count(input[i]);
    }

    return 0;
}

