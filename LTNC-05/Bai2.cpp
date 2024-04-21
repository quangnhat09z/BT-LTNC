#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void inputVector(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void outputSortVector(vector<int> &v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    inputVector(v, n);
    sort(v.begin(), v.end());
    outputSortVector(v, n);
    return 0;
}
