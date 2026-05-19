class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (left == right)
            return head;

        ListNode *beforeLeft = head;
        for (int i = 1; i < left - 1; i++)
            beforeLeft = beforeLeft->next;

        // need to handle the case when left == 1, in which case beforeLeft will be NULL
        // and leftNode will be head
        ListNode *leftNode;
        if (left == 1)
        {
            leftNode = head;
        }
        else
        {
            leftNode = beforeLeft->next;
        }

        ListNode *rightNode = head;
        for (int i = 1; i < right; i++)
            rightNode = rightNode->next;

        ListNode *afterRight = rightNode->next;

        ListNode *prev = NULL;
        ListNode *curr = leftNode;

        while (curr != afterRight && curr != NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // after the loop, prev will be the rightNode, and curr will be afterRight
        // need to connect the reversed sublist back to the original list
        // if left == 1.then there if no beforeLeft, and head should be updated to prev, which is the new head of the reversed sublist
        if (left == 1)
        {
            head = prev;
        }
        else
        {
            beforeLeft->next = prev;
        }

        leftNode->next = afterRight;
        return head;
    }
};

///
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (left == right)
            return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *beforeLeft = dummy;

        for (int i = 1; i < left; i++)
            beforeLeft = beforeLeft->next;

        ListNode *leftNode = beforeLeft->next;
        ListNode *rightNode = head;
        for (int i = 1; i < right; i++)
            rightNode = rightNode->next;

        ListNode *afterRight = rightNode->next;

        ListNode *prev = NULL;
        ListNode *curr = leftNode;

        while (curr != afterRight && curr != NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        beforeLeft->next = prev;
        leftNode->next = afterRight;
        return dummy->next;
    }
};