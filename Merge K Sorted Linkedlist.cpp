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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> s;
        int k=lists.size();
        int i=0;
        ListNode *curr=NULL;
        while(i<k)
        {
            ListNode *curr=lists[i];
            while(curr)
            {
                s.push_back(curr->val);
                curr=curr->next;
            }
            i++;
        }
        sort(s.begin(),s.end());
        ListNode *temp=new ListNode(-1);
        ListNode *head=temp;
        for(auto it:s)
        {
            ListNode *t=new ListNode(it);
            temp->next=t;
            temp=t;
        }
        return head->next;
    }
};
