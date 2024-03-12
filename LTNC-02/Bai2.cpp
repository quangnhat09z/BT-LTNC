#include <iostream>

using namespace std;

void kangarooFunction(int x1, int v1, int x2, int v2) {
    double x = 1.0 * (x2 - x1) / (v1 - v2);
    if (x == int(x) and x > 0) {
        cout << "YES";
    } else cout << "NO";
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    kangarooFunction(x1, v1, x2, v2);
    return 0;
}
