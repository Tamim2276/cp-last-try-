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
    vector<string> st(n);
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }

    sort(st.begin(), st.begin() + k);

    for (int i = 0; i < k; i++)
    {
        cout << st[i] << endl;
    }
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