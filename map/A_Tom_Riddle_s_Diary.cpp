#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "YES"
#define NO "NO"
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    map<string, bool> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s])
        {
            cout << YES << endl;
        }
        else
        {
            cout << NO << endl;
        }
        mp[s] = true;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}