#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int CapCnt = 0;
    int SmallCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            CapCnt++;
        else
            SmallCnt++;
    }
    if (CapCnt > SmallCnt)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
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