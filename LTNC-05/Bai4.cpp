#include <iostream>
#include <vector>


using namespace std;

void inputVector(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void answer(vector<int> &v, vector<int> &check, int m) {
    for (int i = 0; i < m; i++) {
        auto pos = lower_bound(v.begin(), v.end(), check[i]);
        if (pos != v.end() and *pos == check[i]) {
            cout << "Yes " << (pos - v.begin() + 1) << endl;
        } else cout << "No " << (pos - v.begin() + 1) << endl;
    }
}

int main() {
    int n, m;
    cin >> n;
    vector<int> v, check;
    inputVector(v, n);
    cin >> m;
    inputVector(check, m);
    answer(v, check, m);
    return 0;
}
