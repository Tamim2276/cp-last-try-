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
    string s, t;
    cin >> s >> t;
    string new_string = "";
    string rem = "";
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            new_string += s[i];
            new_string += t;
            rem = s[i + 1];
        }
        else
        {
            new_string += s[i];
        }
    }
    // new_string += rem;
    // cout << new_string << endl;
    bool flag = true;
    for (int i = 0; i < new_string.size(); i++)
    {
        if (new_string[i] == new_string[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << YES << endl;
    }
    else
    {
        cout << NO << endl;
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