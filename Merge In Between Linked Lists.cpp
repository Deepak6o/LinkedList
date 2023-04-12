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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *aa=list1;
        ListNode *bb=list1;
        ListNode *p=list2;
        for(int i=1;i<a;i++)
        {
            if(aa->next)
            {
                aa=aa->next;
            }
        }
        for(int i=0;i<=b;i++)
        {
            if(bb)
            {
                bb=bb->next;
            }
        }
         aa->next=p;
       
       while(p->next!=NULL)
       {
           p=p->next;
       }
       p->next=bb;
       

        return list1;
        

        
        
    }
};
