#include <iostream>
#include <cstring>

using namespace std;


int main() {
    int n, x, a[1000], b[1000], arr[1000];
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < n + 1; i++) {
        cin >> arr[i];
        b[arr[i]]++;
    }
    for (int i = 0; i < n + 1; i++) {
        if (a[arr[i]] != b[arr[i]]) {
            cout << arr[i];
            return 0;
        }
    }
    return 0;
}
