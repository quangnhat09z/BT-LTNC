#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a;
    long long b;
    char c;
    double d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e;
    return 0;
}
