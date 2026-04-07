#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "YES"
#define NO "NO"
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;
    // vector<int>a;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum < n)
    {
        cout << NO << endl;
    }
    else if (m == 0 && sum % n != 0)
    {
        cout << NO << endl;
    }
    else
    {
        cout << YES << endl;
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