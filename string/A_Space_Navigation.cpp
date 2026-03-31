#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "YES"
#define NO "NO"
#define endl "\n"
void solve()
{
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    int len = s.length();
    int countR = 0, countL = 0, countU = 0, countD = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'R')
            countR++;
        else if (s[i] == 'L')
            countL++;
        else if (s[i] == 'U')
            countU++;
        else if (s[i] == 'D')
            countD++;
    }

    bool flg = true;
    if (x > 0)
    {
        if (countR < x)
            flg = false;
    }
    else
    {
        if (countL < abs(x))
            flg = false;
    }
    if (y > 0)
    {
        if (countU < y)
            flg = false;
    }
    else
    {
        if (countD < abs(y))
            flg = false;
    }
    if (flg)
        cout << YES << endl;
    else
        cout << NO << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}