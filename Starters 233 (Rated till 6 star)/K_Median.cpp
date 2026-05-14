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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int m = n - k;                       // Size of the array after deleting K elements
    int median_offset = (m + 1) / 2 - 1; // 0-based index of the median inside our window

    vector<int> ans;

    // Two pointers: l (left) and r (right) represent the window of kept elements
    int l = 0, r = m - 1;

    while (r < n)
    {
        // The median of the current window `[l, r]` is located at `l + median_offset`
        int current_median = v[l + median_offset];

        // Since the array is sorted, medians will appear in sorted order. We just prevent duplicates
        if (ans.empty() || ans.back() != current_median)
        {
            ans.push_back(current_median);
        }

        // Slide the window forward by 1 (which effectively changes which K elements are deleted)
        l++;
        r++;
    }

    for (auto &x : ans)
        cout << x << " ";
    cout << endl;
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