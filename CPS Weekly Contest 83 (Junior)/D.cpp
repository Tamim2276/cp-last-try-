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
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (sum <= m)
            cnt++;
    }
    cout << cnt << endl;
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