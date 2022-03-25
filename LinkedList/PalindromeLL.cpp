#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
       if(!head or !head->next) return true;
        ListNode *slow=head,*fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //Odd Case
        if(fast) slow=slow->next;
        
        //Reverse The LL
        ListNode *pre=NULL,*curr=slow,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        
        //Check for Palin
        while(pre){
            if(pre->val!=head->val) return false;
            pre=pre->next;
            head=head->next;
        }
        return true;
    }
};