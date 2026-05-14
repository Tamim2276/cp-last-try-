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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    if (mp.size() == 1)
    {
        cout << YES << endl;
        return;
    }
    if (mp.size() > 2)
    {
        cout << NO << endl;
        return;
    }
    int cnt1 = count(a.begin(), a.end(), mp.begin()->first);
    int cnt2 = count(a.begin(), a.end(), mp.rbegin()->first);
    if (n % 2 == 0)
    {
        if (cnt1 == n / 2 && cnt2 == n / 2)
            cout << YES << endl;
        else
            cout << NO << endl;
    }
    else
    {
        if ((cnt1 == (n + 1) / 2 && cnt2 == (n) / 2) || (cnt1 == (n) / 2 && cnt2 == (n + 1) / 2))
            cout << YES << endl;
        else
            cout << NO << endl;
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