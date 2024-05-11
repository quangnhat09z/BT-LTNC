#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
map<string, int> memo;

int find(vector<int> arr, int x, int n, int index) {
    if (x == 0) return 1;
    if (index >= arr.size()) return 0;

    string key = to_string(x) + "-" + to_string(index);
    if (memo.count(key)) {
        return memo[key];
    }

    int ways = find(arr, x, n, index + 1) + find(arr, x - pow(arr[index], n), n, index + 1);

    memo[key] = ways;
    return ways;
}

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> arr;

    for (int i = 1; i <= sqrt(x); i++) {
        arr.push_back(i);
    }
    cout << find(arr, x, n, 0) << endl;
    return 0;
}

