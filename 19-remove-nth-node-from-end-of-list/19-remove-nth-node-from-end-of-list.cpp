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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
       // ListNode* curr=head;
        int len=0;
        for(ListNode* curr=head;curr!=NULL;curr=curr->next)
            len++;
        
        if(len==n)
        {
            head=head->next;
        return head;
        }
            
      ListNode* curr=head;
        for(int i=0;i<len-n-1;i++)
        {
            curr=curr->next;
            
        }
        curr->next=curr->next->next;
        return head;
        
    }
};