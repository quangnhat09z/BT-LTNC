#include <iostream>

using namespace std;

class student {
public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int CalculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }

private:
    int scores[5];
};

int main() {
    int n;
    cin >> n;

    student a[n]; //t?o m?ng a có ki?u d? li?u student g?m n ph?n t?
    for (int i = 0; i < n; i++) {
        a[i].input();
    }
    
    int kristenScore = a[0].CalculateTotalScore();
    int count = 0;
    
    for (int i = 1; i < n; i++) {
        if (a[i].CalculateTotalScore() > kristenScore) count++;
    }
    
    cout << count;
    return 0;
}
