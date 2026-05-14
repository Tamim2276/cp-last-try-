#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define YES "Yes"
#define NO "No"
#define endl "\n"
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void INSERT_AFTER(Node *&head, Node *&tail, string val, Node *&curr)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        curr = newNode;
    }
    else
    {
        newNode->next = curr->next;
        newNode->prev = curr;
        if (curr->next != NULL)
            curr->next->prev = newNode;
        else
            tail = newNode;
        curr->next = newNode;
        curr = newNode;
    }
}
void DELETE_CURRENT(Node *&head, Node *&tail, Node *&curr)
{
    if (curr == NULL)
        return;
    Node *del = curr;

    if (curr->next != NULL)
    {
        curr = curr->next;
        curr->prev = del->prev;
        if (del->prev != NULL)
            del->prev->next = curr;
        else
            head = curr;
    }
    else if (curr->prev != NULL)
    {
        curr = curr->prev;
        curr->next = NULL;
        tail = curr;
    }
    else
    {

        head = NULL;
        tail = NULL;
        curr = NULL;
        delete del;
        return;
    }
    delete del;
}
void MOVE_TABS(Node *&curr, string dir)
{
    if (curr == NULL)
        return;
    if (dir == "->" && curr->next != NULL)
        curr = curr->next;
    else if (dir == "<-" && curr->prev != NULL)
        curr = curr->prev;
}
void GET_CURRENT(Node *curr)
{
    if (curr == NULL)
        cout << "No Tabs" << endl;
    else
        cout << curr->val << endl;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = NULL, *tail = NULL, *curr = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            string val;
            cin >> val;
            INSERT_AFTER(head, tail, val, curr);
        }
        else if (op == 2)
        {
            DELETE_CURRENT(head, tail, curr);
        }
        else if (op == 3)
        {
            string dir;
            cin >> dir;
            MOVE_TABS(curr, dir);
        }
        else if (op == 4)
        {
            GET_CURRENT(curr);
        }
    }
}