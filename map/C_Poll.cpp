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
    vector<string> a(n);
    map<string, int> mp;
    int mxCnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        mxCnt = max(mxCnt, mp[a[i]]);
    }
    for (auto &x : mp)
    {
        if (x.second == mxCnt)
            cout << x.first << endl;
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