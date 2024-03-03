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
        ListNode *fast = head;
        ListNode *slow = head;    
        int c=0,k;
        while(fast)
        {
            fast = fast->next;
            c+=1;
        }
        k=c-n;
        if(c==n) return head->next;
        for(int i=1;i<k;i++)
        {
            slow=slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};