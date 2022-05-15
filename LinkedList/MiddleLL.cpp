#include<bits/stdc++.h>
using namespace std;

//To get the first middle node in a even LL

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        return slow;
    }
};


//To get the second middle node in a even LL

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        return slow;
    }
};