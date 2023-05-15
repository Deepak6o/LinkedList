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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *f=head;
        for(int i=0;i<k-1;i++)
        {
            f=f->next;
        }
        ListNode *b=f;
        ListNode *e=head;
        while(f->next!=NULL)
        {
            f=f->next;
            e=e->next;
        }
        swap(b->val,e->val);
        return head;
        
    }
};
