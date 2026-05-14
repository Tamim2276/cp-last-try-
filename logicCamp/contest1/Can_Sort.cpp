#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
class Node
{
public:
    int val;
    Node *next;
    int sz;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->sz = 0;
    }
};
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        tail->sz = 1;
    }
    else
    {
        newNode->sz = tail->sz + 1;
        tail->next = newNode;
        tail = newNode;
    }
}

void check(Node *head)
{
    vector<Node *> bad;
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
            bad.push_back(tmp);
        tmp = tmp->next;
    }

    if (bad.size() == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    if (bad.size() > 2)
    {
        cout << "No" << endl;
        return;
    }
    Node *l = bad[0];
    Node *r = bad.back()->next;

    swap(l->val, r->val);

    tmp = head;
    bool ok = true;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            ok = false;
            break;
        }
        tmp = tmp->next;
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
void solve()
{
    string st;
    getline(cin, st);
    stringstream ss(st);

    int n;
    Node *head = NULL;
    Node *tail = NULL;
    while (ss >> n)
    {
        insert(head, tail, n);
    }
    check(head);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t)
    {
        string s;
        getline(cin, s);
        while (t--)
            solve();
    }
}