#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flg = false;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            flg = true;
            break;
        }
    }
    if (!flg)
        cout << -1 << endl;
    else
    {
        if (s[i] == 'R')
            cout << 0 << endl;
        else
            cout << i + 1 << endl;
    }
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