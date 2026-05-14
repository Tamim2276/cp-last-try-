#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
class Node
{
public:
    char val;
    Node *next;
    int sz;
    Node(char val)
    {
        this->val = val;
        this->next = NULL;
        this->sz = 0;
    }
};
void insert(Node *&head, Node *&tail, char val)
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
void reverse(Node *&head, Node *&tail)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    swap(head, tail);
}
string extractString(Node *head)
{
    string result;
    Node *temp = head;
    while (temp != NULL)
    {
        result += temp->val;
        temp = temp->next;
    }
    return result;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void solve()
{
    string st;
    getline(cin, st);
    stringstream ss(st);

    int n;
    Node *head = NULL;
    Node *tail = NULL;
    char c;
    while (ss >> c)
    {
        insert(head, tail, c);
    }
    // print(head);
    // cout << endl;
    string originalStr = extractString(head);
    // cout << originalStr << endl;
    reverse(head, tail);
    string reversedStr = extractString(head);
    // cout << reversedStr << endl;
    if (originalStr == reversedStr)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
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