#include <iostream>

using namespace std;

int main() {
    double mealCost;
    int tipPercent;
    int taxPercent;

    cin >> mealCost >> tipPercent >> taxPercent;
    double tip = mealCost / 100 * tipPercent;
    double tax = mealCost / 100 * taxPercent;

    double total = (tip + tax + mealCost);

    if (total > int(total)+0.5 and total < (int)(total+1)) cout << (int)(total+1);
    else cout << (int)(total);

    return 0;
}

