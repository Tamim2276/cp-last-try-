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
    string s;
    cin >> s;
    char front = s[0];
    // cout << front << endl;
    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] <= front)
        {
            front = s[i];
            idx = i;
        }
    }
    s.erase(idx, 1);
    // cout << s << endl;
    s = front + s;
    cout << s << endl;
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