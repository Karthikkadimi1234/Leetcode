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
        ListNode *start = new ListNode();
       // start->next = head;
        ListNode *fast = head;
        ListNode *slow = head;    
        int c=0;
        while(fast)
        {
            fast = fast->next;
            c+=1;
        }
        int k=c-n;
        if(c==1 and n==1) return NULL;
        if(c==n) return head->next;
        for(int i=1;i<k;i++)
        {
            slow=slow->next;
        }
        cout<<slow->val;
      slow->next = slow->next->next;
        return head;
    }
};