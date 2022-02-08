struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
  
    Node *merge(Node *a,Node *b){
        if(!a) return b;
        if(!b) return a;
        if(a->data<b->data){
            a->next=merge(a->next,b);
        }
        else{
            b->next=merge(a,b->next);
        }
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        Node *slow=head,*fast=head->next;
        if(!head or !head->next) return head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        Node *newHead=slow->next;
        slow->next=NULL;
        return merge(mergeSort(head),mergeSort(newHead));
    }
};
