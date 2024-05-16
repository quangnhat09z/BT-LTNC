#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    if (n%2==1) cout << "Weird";
    else if (n%2==0 and 2<=n and n<=5) cout << "Not Weird";
    else if (n%2==0 and 6<=n and n<=20) cout << "Weird";
    else cout << "Not Weird";

    return 0;
}

