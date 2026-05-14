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
    ListNode *reverse(ListNode *&head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return prev;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *node1 = NULL;
        ListNode *node2 = NULL;

        ListNode *tmp = head;
        for (int i = 1; i < k; i++)
            tmp = tmp->next;
        node1 = tmp;

        ListNode *tmp2 = head;
        reverse(tmp2);

        ListNode *tmp3 = tmp2;
        for (int i = 1; i < k; i++)
            tmp3 = tmp3->next;
        node2 = tmp3;

        swap(node1->val, node2->val);

        reverse(tmp2);
        return tmp2;
    }
};

//// Simpler Solution using Two Pointers fast and slow
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *node1 = head;

        for (int i = 1; i < k; i++)
        {
            fast = fast->next;
        }
        node1 = fast;
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        swap(node1->val, slow->val);
        return head;
    }
};