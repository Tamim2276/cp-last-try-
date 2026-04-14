#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0;
    int ans = 0;
    while (i < n)
    {
        int val = a[i] + w + d;
        int idx = upper_bound(a.begin(), a.end(), val) - a.begin();
        if (a[idx] != val)
            idx--;
        int size = idx - i + 1;
        if (size > k)
            i += k;
        else
            i += size;
        ans++;
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