#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, positiveNumber = 0, negativeNumber = 0, number0 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) positiveNumber++;
        if (a[i] < 0) negativeNumber++;
        if (a[i] == 0) number0++;
    }

    cout << fixed << setprecision(6) << 1.0 * positiveNumber / n << endl;
    cout << fixed << setprecision(6) << 1.0 * negativeNumber / n << endl;
    cout << fixed << setprecision(6) << 1.0 * number0 / n << endl;

    return 0;
}
