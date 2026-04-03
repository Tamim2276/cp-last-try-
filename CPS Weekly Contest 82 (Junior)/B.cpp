#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "YES"
#define NO "NO"
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    if (n == 1 || n % 2 == 0)
        cout << YES << endl;
    else
        cout << NO << endl;
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