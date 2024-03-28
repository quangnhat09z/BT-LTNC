#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, x, a[10001];
    cin >> n;
    int maxx = -999;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
        maxx = max(a[x], maxx);
    }
    cout << n - maxx;

    return 0;
}

