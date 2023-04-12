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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *temp=head;
        int count =0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next; 
        }
        if(n==count){
            return head->next;
        }
        ListNode *p=head;
        ListNode *q=p->next;
        count-=n;
        count--;
        while(count--)
        {
            p=q;
            q=q->next;
        }
        p->next=q->next;
        q->next=NULL;
        
    return head;
        
    }
};
