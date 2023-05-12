class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        while(head)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
            int a=ans[i];
            for(int j=i+1;j<n;j++)
            {
                if(ans[j]>a)
                {
                    ans[i]=ans[j];
                    break;
                }
            }
            if(ans[i]==a)
            {
                ans[i]=0;
            }
        }
        return ans;
    }
};
