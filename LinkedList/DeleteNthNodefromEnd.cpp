#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *slow=head,*fast=head;
       for(int i=0;i<n;i++){
           fast=fast->next;
       }
        //Edge Case
        if(!fast) return head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};


// Watch this video incase
// https://www.youtube.com/watch?v=Lhu3MsXZy-Q