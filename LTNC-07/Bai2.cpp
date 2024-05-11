#include <iostream>
#include <vector>

using namespace std;

void answer() {
    vector<char> strings = {'a', 'b', 'c', 'd'};
    vector<string> result;
    for (char letter1: strings) {
        for (char letter2: strings) {
            for (char letter3: strings) {
                string word;
                word += letter1;
                word += letter2;
                word += letter3;
                result.push_back(word);
            }
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}

int main() {
    answer();
    return 0;
}
