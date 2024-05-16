#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int x; double y; string z;
    cin >> x;
    cin >> y;
    cin.ignore(1);

    getline(cin,z);
    cout << x+i << endl;
    cout << setprecision(1) << fixed << y+d << endl;
    cout << s + z << endl;

    return 0;
}
