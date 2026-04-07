#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"

int memo[25][25][25];

int LCS(int i, int j, int cnt, const string &s1, const string &s2)
{
    if (i == 0 || j == 0)
        return cnt;

    if (memo[i][j][cnt] != -1)
        return memo[i][j][cnt];

    int maxCnt = cnt;
    if (s1[i - 1] == s2[j - 1])
        maxCnt = LCS(i - 1, j - 1, cnt + 1, s1, s2);

    int cn1 = LCS(i - 1, j, 0, s1, s2);
    int cn2 = LCS(i, j - 1, 0, s1, s2);

    memo[i][j][cnt] = max({maxCnt, cn1, cn2});
    return memo[i][j][cnt];
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();

    memset(memo, -1, sizeof(memo));

    int lcs = LCS(n, m, 0, s1, s2);

    int ans = n + m - 2 * lcs;
    cout << ans << endl;
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