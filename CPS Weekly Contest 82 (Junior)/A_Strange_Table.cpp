#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    ll col = (x - 1) / n;
    ll row = (x - 1) % n;
    cout << row * m + col + 1 << endl;
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