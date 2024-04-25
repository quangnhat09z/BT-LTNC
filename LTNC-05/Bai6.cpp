#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    int type, marks;
    string name;
    vector<int> result;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 1) {
            cin >> name >> marks;
            mp[name] += marks;
        } else if (type == 2) {
            cin >> name;
            mp.erase(name);
        } else if (type == 3) {
            cin >> name;
            result.push_back(mp[name]);
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
