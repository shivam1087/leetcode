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
    bool isPalindrome(ListNode* head) 
    {
        //ListNode* curr=head;
        stack<int>st;
        
        for(ListNode* curr=head;curr!=NULL;curr=curr->next)
        {
            st.push(curr->val);
        }
       // ListNode *curr=head;
        for(ListNode* curr=head;curr!=NULL;curr=curr->next)
        {
            if(st.top()!=curr->val)
                return false;
            st.pop();
        }
        return true;
        
        
    }
};