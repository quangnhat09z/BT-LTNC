#include <iostream>
using namespace std;
int pageflips(int n, int p)
{
    int flips;
    if (p%2 == 0) flips = p/2;
    if (p%2 != 0) flips = (p-1)/2;

    int flipsEnd;
    if (n%2 == 0) flipsEnd = n/2;
    if (n%2 != 0) flipsEnd = (n-1)/2;

    if (flips <= flipsEnd - flips) return flips;
    else return flipsEnd-flips;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << pageflips(n, p);

    return 0;
}

