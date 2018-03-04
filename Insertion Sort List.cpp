/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head)
    {
        if(head == NULL)
        {
            return head;
        }
        for(struct ListNode *current = head; current->next != NULL; current = current->next)
        {
            for(struct ListNode *insertion = current->next; insertion != NULL; insertion = insertion->next)
            {
                if(current->val > insertion->val)
                {
                    swap(current->val, insertion->val);
                }
            }
        }
        return head;
    }
};
