#include <iostream>
#include <string>

using namespace std;


void outputSize(string str1, string str2) {
    cout << str1.length() << " " << str2.length() << endl;
}

void outputConcatenateString(string str1, string str2) {
    cout << str1 + str2 << endl;
}

void outputSeparatedString(string str1, string str2) {
    cout << str2[0];
    for (int i = 1; i < str1.length(); i++) {
        cout << str1[i];
    }
    cout << " ";

    cout << str1[0];
    for (int i = 1; i < str2.length(); i++) {
        cout << str2[i];
    }
    cout << endl;
}

int main() {

    string str1, str2;
    cin >> str1 >> str2;

    outputSize(str1, str2);
    outputConcatenateString(str1, str2);
    outputSeparatedString(str1, str2);

    return 0;
}
