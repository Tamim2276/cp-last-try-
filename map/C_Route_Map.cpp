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
    vector<string> a(n), b(m);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 0)
            cout << YES << endl;
        else
            cout << NO << endl;
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