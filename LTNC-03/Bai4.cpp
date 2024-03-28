#include <iostream>
#include <string>


using namespace std;

int checkCharacterLetter(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cin >> str;
    cout << checkCharacterLetter(str) + 1;

    return 0;
}
