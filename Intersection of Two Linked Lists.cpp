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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p;   
        while(headA!=NULL)
        {
            p=headB;
            while(p!=NULL)
            {
                if(headA==p)
                {
                    return headA;
                   
                }
                 p=p->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};
