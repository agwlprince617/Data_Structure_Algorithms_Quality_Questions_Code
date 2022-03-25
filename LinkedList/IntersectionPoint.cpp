#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

//TC is O(n+m) Sc is O(n)
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_set<Node*> s;
    
    while(head1){
        s.insert(head1);
        head1=head1->next;
    }
    while(head2){
        if(s.find(head2)!=s.end()){
            return head2->data;
        }
        head2=head2->next;
    }
    return -1;
}


//TC is O(n+m) Sc is O(1)
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
        
    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        //
        // Any time they collide or reach end together without colliding 
        // then return any one of the pointers.
        //
        if (p1 == p2) return p1;

        //
        // If one of them reaches the end earlier then reuse it 
        // by moving it to the beginning of other list.
        // Once both of them go through reassigning, 
        // they will be equidistant from the collision point.
        //
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }
        
    return p1;
}