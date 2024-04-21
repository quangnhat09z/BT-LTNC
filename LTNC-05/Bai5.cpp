#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, type, element;
    cin >> n;
    set<int> s;
    vector<string> result;
    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 1) {
            cin >> element;
            s.insert(element);
        } else if (type == 2) {
            cin >> element;
            s.erase(element);
        } else {
            cin >> element;
            auto itr = s.find(element);
            //set<int, int>::iterator itr = s.find(element);
            if (itr != s.end()) {
                result.push_back("Yes");
            } else result.push_back("No");//emplace_back
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
