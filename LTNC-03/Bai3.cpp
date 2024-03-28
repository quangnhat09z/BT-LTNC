#include <iostream>
#include <string>

using namespace std;

void print(string str) {
    for (int i = 2; i < str.length() - 2; i++) {
        cout << str[i];
    }
    cout << endl;
}


void timeConversion(string str) {
    int x = stoi(str);


    if (x == 12 and str[str.length() - 2] == 'A') {
        cout << "00";
        print(str);
    } else if (x == 12 and str[str.length() - 2] == 'P') {
        cout << "12";
        print(str);
    } else if (x != 12 and str[str.length() - 2] == 'A') {
        cout << str.erase(str.length() - 2);
    } else {
        cout << x + 12;
        print(str);
    }
}

int main() {
    string str;
    cin >> str;
    timeConversion(str);

    return 0;
}

