#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        a.push_back(i + 1);
    }
    // for (int x : a)
    //     cout << x << " ";
    reverse(a.begin() + l - 1, a.begin() + r);
    for (int x : a)
        cout << x << " ";
    cout << endl;
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