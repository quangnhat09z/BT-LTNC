#include <iostream>
#include <vector>

using namespace std;

void inputArray(vector<int> &a, int n) {
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }
}

bool flag(vector<int> arr) {
    int n = arr.size();
    int totalSum = 0, sum1 = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++) {

        if (totalSum - sum1 - arr[i] == sum1) {
            return true;
        }
        sum1 = sum1 + arr[i];
    }
    return false;
}

int main() {
    int k;
    cin >> k;

    vector<vector<int>> array;

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        vector<int> a;
        inputArray(a, n);

        array.push_back(a);
    }

    for (int i = 0; i < k; i++) {

        if (flag(array[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }

    return 0;
}
