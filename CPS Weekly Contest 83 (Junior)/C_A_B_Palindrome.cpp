#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
void solve()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            a--;
        else if (s[i] == '1')
            b--;
        else
            c++;
    }
    if (c == 0)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                cout << -1 << endl;
                return;
            }
        }
        if (a > 0 || b > 0)
        {
            cout << -1 << endl;
            return;
        }
        cout << s << endl;
        return;
    }
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == '?' && s[s.size() - 1 - i] != '?')
        {
            if (s[s.size() - 1 - i] == '0' && a > 0)
            {
                s[i] = '0';
                a--;
            }
            else if (s[s.size() - 1 - i] == '0' && a <= 0)
            {
                cout << -1 << endl;
                return;
            }
            else if (s[s.size() - 1 - i] == '1' && b > 0)
            {
                s[i] = '1';
                b--;
            }
            else if (s[s.size() - 1 - i] == '1' && b <= 0)
            {
                cout << -1 << endl;
                return;
            }
        }
        else if (s[i] != '?' && s[s.size() - 1 - i] == '?')
        {
            if (s[i] == '0' && a > 0)
            {
                s[s.size() - 1 - i] = '0';
                a--;
            }
            else if (s[i] == '0' && a <= 0)
            {
                cout << -1 << endl;
                return;
            }
            else if (s[i] == '1' && b > 0)
            {
                s[s.size() - 1 - i] = '1';
                b--;
            }
            else if (s[i] == '1' && b <= 0)
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == '?' && s[s.size() - 1 - i] == '?')
        {
            if (a > 1)
            {
                s[i] = '0';
                s[s.size() - 1 - i] = '0';
                a -= 2;
            }
            else if (b > 1)
            {
                s[i] = '1';
                s[s.size() - 1 - i] = '1';
                b -= 2;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (s.size() % 2 == 1 && s[s.size() / 2] == '?')
    {
        if (a > 0)
        {
            s[s.size() / 2] = '0';
            a--;
        }
        else if (b > 0)
        {
            s[s.size() / 2] = '1';
            b--;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    if (a > 0 || b > 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << s << endl;
    return;
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