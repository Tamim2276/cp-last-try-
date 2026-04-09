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
    map<int, int> tickets;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tickets[x]++;
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto it = tickets.upper_bound(x); // returns an iterator to the first element that is greater than x
        // upper works on the key of the map, which is the price of the ticket
        if (it == tickets.begin()) // if there is no ticket that is less than or equal to x
            cout << -1 << endl;
        else
        {
            it--;
            cout << it->first << endl;
            it->second--;
            if (it->second == 0) // if there are no more tickets of that price, remove it from the map
                tickets.erase(it);
        }
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