#include <iostream>
using namespace std;

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n-i) cout << " ";
            if (j > n-i) cout << "#";
        }
        cout << endl;
    }
}
int main()
{
    int n; cin >> n;
    staircase(n);
    return 0;
}

