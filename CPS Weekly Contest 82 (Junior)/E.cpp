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
    vector<int> a;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum += mat[i][j];
        }
        if (colSum < a[j])
        {
            cout << NO << endl;
            return;
        }
    }
    cout << YES << endl;
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