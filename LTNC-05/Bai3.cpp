#include <iostream>
#include <vector>

using namespace std;

void inputVector(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void printVector(vector<int> &v, int n, int start, int end) {
    int length = n - 1 - (end - start);
    v.resize(length);
    cout << length << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {
    int n, start, end, eraseElement;
    cin >> n;
    vector<int> v;
    inputVector(v, n);
    cin >> eraseElement;
    cin >> start >> end;
    v.erase(v.begin() + eraseElement - 1);
    v.erase(v.begin() + start - 1, v.begin() + end - 1);
    printVector(v, n, start, end);
    return 0;
}

