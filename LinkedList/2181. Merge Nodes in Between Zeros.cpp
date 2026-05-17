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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *i = head;
        ListNode *j = head->next;
        int sum = 0;
        while (j != NULL)
        {
            if (j->val == 0)
            {
                i->val = sum;
                i->next = j->next;
                i = i->next;
                sum = 0;
            }
            sum += j->val;
            j = j->next;
        }
        return head;
    }
};