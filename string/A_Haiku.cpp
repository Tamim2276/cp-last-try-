#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "YES"
#define NO "NO"
#define endl "\n"

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve()
{
    int arr[3] = {5, 7, 5};
    string s;
    bool flag = true;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, s);
        int cnt = 0;
        for (char c : s)
        {
            if (isVowel(c))
            {
                cnt++;
            }
        }
        if (cnt != arr[i])
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
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}