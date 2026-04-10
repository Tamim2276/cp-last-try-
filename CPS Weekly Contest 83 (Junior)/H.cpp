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
    char mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int x1, y1, x2, y2;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == '*' && cnt == 0)
            {
                x1 = i;
                y1 = j;
                cnt++;
            }
            else if (mat[i][j] == '*' && cnt == 1)
            {
                x2 = i;
                y2 = j;
            }
        }
    }
    // cout << x1 << " " << y1 << endl;
    // cout << x2 << " " << y2 << endl;
    if (x1 == x2)
    {
        int x3, y3, x4, y4;
        x3 = (x1 + 1) % n;
        y3 = y1;
        x4 = (x2 + 1) % n;
        y4 = y2;

        mat[x3][y3] = '*';
        mat[x4][y4] = '*';
    }
    else if (y1 == y2)
    {
        int x3, y3, x4, y4;
        x3 = x1;
        y3 = (y1 + 1) % n;
        x4 = x2;
        y4 = (y2 + 1) % n;

        mat[x3][y3] = '*';
        mat[x4][y4] = '*';
    }
    else
    {
        int x3, y3, x4, y4;
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
        // cout << x3 << " " << y3 << endl;
        // cout << x4 << " " << y4 << endl;
        mat[x3][y3] = '*';
        mat[x4][y4] = '*';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
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