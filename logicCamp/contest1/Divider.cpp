#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

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
void print(Node *head, int sz)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL && count < sz)
    {
        cout << temp->val << " ";
        temp = temp->next;
        count++;
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
int main()
{
    int n;
    Node *head = NULL;
    Node *tail = NULL;
    while (cin >> n)
    {
        insert(head, tail, n);
    }

    int totalSize = tail->sz;

    print(head, totalSize / 2);
    reverse(head, tail);
    if (totalSize % 2 == 0)
    {
        print(head, totalSize / 2);
    }
    else
    {
        print(head, totalSize / 2 + 1);
    }
    return 0;
}