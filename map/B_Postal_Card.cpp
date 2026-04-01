#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;
    int tmp = n + m;
    int i = 0;
    int ans = 0;
    map<string, bool> mp;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        mp[s] = true;
    }
    for (int i = 0; i < v.size(); i++)
    {
        string s = v[i];
        string t = s.substr(3, 3);
        if (mp[t])
        {
            ans++;
        }
    }
    cout << ans << endl;
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