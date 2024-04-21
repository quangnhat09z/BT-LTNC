#include <iostream>
#include <cmath>

using namespace std;

void calculator(int *a, int *b) {
    int sum = *a + *b;
    int dif = abs(*a - *b);

    cout << sum << endl;
    cout << dif << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    calculator(&a, &b);
    return 0;
}
