#include <iostream>
#include <vector>

using namespace std;

void print(string s)
{
    vector<char> answerEven;
    vector<char> answerOdd;
    for (int i = 0; i < s.length();i++)
    {
        if (i%2 == 0) answerEven.push_back(s[i]);
        else answerOdd.push_back(s[i]);
    }
    for (int i = 0; i < answerEven.size(); i++)
    {
        cout << answerEven[i];
    }
    cout << " ";
    for (int i = 0; i < answerOdd.size();i++)
    {
        cout << answerOdd[i];
    }
}
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s ; cin >> s;
        print(s);
        cout << endl;
    }

    return 0;
}

