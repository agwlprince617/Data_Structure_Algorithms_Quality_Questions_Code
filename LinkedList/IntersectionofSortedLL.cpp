//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
   Node *p,*q,*head,*curr;
   p=head1;q=head2;head=NULL;curr=NULL;
   while(p and q){
       if(p->data==q->data){
           if(head==NULL){
           Node *t=new Node(p->data);
           head=t;
           curr=t;
           }
           else{
           Node *t=new Node(p->data);
           curr->next=t;
           curr=curr->next;
       }
       p=p->next;
       q=q->next;
       }
       else{
           if(p->data<q->data){
               p=p->next;
           }
           else{
               q=q->next;
           }
       }
   }
   return head;
}