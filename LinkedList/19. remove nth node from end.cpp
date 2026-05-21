/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int size = 0;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            tmp = tmp->next;
            size++;
        }
        int k = size - n;
        // cout<<k<<endl;
        if (k == 0)
            return head->next; // delete head node
        tmp = head;
        for (int i = 0; i < k - 1; i++)
        {
            tmp = tmp->next;
        }
        // cout << tmp->val;

        tmp->next = tmp->next->next;
        return head;
    }
};

// in one pass
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        // cout<<fast->val;
        if (fast == NULL)
            return head->next; // size = 1
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        // cout<<slow->val;
        slow->next = slow->next->next;
        return head;
    }
};