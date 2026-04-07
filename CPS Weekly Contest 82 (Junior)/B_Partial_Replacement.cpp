#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    if (first == -1)
    {
        cout << 0 << endl;
        return;
    }
    if (first == last)
    {
        cout << 1 << endl;
        return;
    }

    int ans = 1;
    int cur = first;
    while (cur < last)
    {
        int next_idx = cur;
        for (int step = 1; step <= k; step++)
        {
            if (cur + step <= last && s[cur + step] == '*')
            {
                next_idx = cur + step;
            }
        }
        cur = next_idx;
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