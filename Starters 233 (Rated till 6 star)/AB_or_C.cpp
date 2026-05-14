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
    vector<pair<ll, int>> v;
    for (int i = 0; i < n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, i});
        v.push_back({b, i});
        v.push_back({c, i});
    }
    sort(v.begin(), v.end());
    ll ans = LLONG_MAX;
    int l = 0, r = 0;
    int unCnt = 0;
    vector<int> freq(n, 0);
    while (r < v.size())
    {
        int idx = v[r].second;
        if (freq[idx] == 0)
            unCnt++;
        freq[idx]++;
        while (unCnt == n)
        {
            ans = min(ans, v[r].first - v[l].first);
            int idx = v[l].second;
            freq[idx]--;
            if (freq[idx] == 0)
                unCnt--;
            l++;
        }
        r++;
    }
    cout << ans << endl;
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