#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;
    if (n < m)
        cout << n * c + (m - n) * b << endl;
    else
        cout << m * c + (n - m) * a << endl;
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