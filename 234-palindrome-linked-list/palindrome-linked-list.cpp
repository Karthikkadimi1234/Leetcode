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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head,*tem=head;
        int c=0;
        vector<int>v;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>k;
        k=v;

       reverse(v.begin(),v.end());
       if(k==v) return 1;
       return 0;
    }
};