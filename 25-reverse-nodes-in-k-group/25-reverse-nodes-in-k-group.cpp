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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        
        if(head==NULL)
            return head;
        ListNode* curr=head,*prev=NULL,*next=NULL;
        ListNode* ksize=head;
    
        for(int i=0;i<k;i++)
        {
            if(ksize==NULL)
                return head;
            ksize=ksize->next;
        }
        
        
        int count=0;
        while(curr!=NULL and count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
            
        }
        if(next!=NULL)
        {
            ListNode* reshead=reverseKGroup(next,k);
            head->next=reshead;
        }
        return prev;
    }
};