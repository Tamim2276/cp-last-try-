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
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int i = 2;
        int ans = 1;
        while (true)
        {
            if (i > n)
                break;
            else
            {
                i += 7;
                ans++;
            }
        }
        ans--;
        cout << ans << endl;
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