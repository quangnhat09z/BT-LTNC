#include <iostream>
#include <vector>

using namespace std;

void inputArray(vector<int> &a, int n) {

    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int check(vector<int> &a, int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % k == 0) {
                count += 1;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a;
    inputArray(a, n);
    cout << check(a, n, k);

    return 0;
}

