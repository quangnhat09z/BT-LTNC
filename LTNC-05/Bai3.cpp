#include <iostream>
#include <vector>

using namespace std;

void inputVector(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
}

int diff(vector<int> &v, int x) {
    for (int i = 1; i <= v.size(); i++) {
        if (v[i] - x == 0) return i;
        if (v[i] - x > 0) return i;
    }
}

int linearSearch(vector<int> &v, int x) {
    for (int i = 1; i <= v.size(); i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

void check(vector<int> &v, int x) {
    for (int i = 1; i <= v.size(); i++) {
        if (linearSearch(v, x) > 0) {
            cout << "Yes " << linearSearch(v, x) << endl;
            break;
        }
        if (linearSearch(v, x) == -1) {
            cout << "No " << diff(v, x) << endl;
            break;
        }
    }
}

void printAnswer(vector<int> &v, vector<int> &answerVector) {
    for (int i = 1; i <= answerVector.size(); i++) {
        check(v, answerVector[i]);
    }
}

int main() {
    int n, number;
    cin >> n;
    vector<int> v, answerVector;
    inputVector(v, n);
    cin >> number;
    inputVector(answerVector, number);
    printAnswer(v, answerVector);
    
    return 0;
}
