#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    string s;
    string num;
    cin >> s;
    int len = s.length();
    if (len != 8)
    {
        cout << NO << endl;
        return;
    }
    if (isupper(s[0]) && isupper(s[len - 1]))
    {
        for (int i = 1; i < len - 1; i++)
        {
            if (isdigit(s[i]))
            {
                num += s[i];
            }
        }
        // cout << num << endl;
        int number = stoi(num);
        if (number >= 100000 && number <= 999999)
        {
            cout << YES << endl;
        }
        else
        {
            cout << NO << endl;
        }
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
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}