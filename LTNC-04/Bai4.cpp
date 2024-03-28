#include <iostream>
#include <vector>


using namespace std;

void inputArray(vector<int> &a, int n) {
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
}


int main() {
    int n, q;
    cin >> n >> q;


    vector<vector<int>> input;
    for (int i = 0; i < n; i++) {
        int arrSize;
        cin >> arrSize;

        vector<int> a;
        inputArray(a, arrSize);

        input.push_back(a);
    }

    int outputArr[q];
    for (int i = 0; i < q; i++) {
        int sequenceIndex, elementIndex;
        cin >> sequenceIndex >> elementIndex;
        outputArr[i] = input[sequenceIndex][elementIndex];
    }
    for (int i = 0; i < q; i++) {
        cout << outputArr[i] << endl;
    }
    return 0;
}
