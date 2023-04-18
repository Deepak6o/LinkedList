class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        k=k%c;
        while(k--)
        {
            ListNode *p=head;
            ListNode *q=head->next;
            while(q!=NULL and q->next!=NULL)
            {
                p=q;
                q=q->next;
            }
            p->next=NULL;
            q->next=head;
            head=q;
        }
        return head;
    }
};
