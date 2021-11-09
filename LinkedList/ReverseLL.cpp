#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*head=NULL;

void createLL(int arr[],int n){
    node *temp,*last;
    //Creation of the first node
    head=new node;
    head->data=arr[0];
    head->next=NULL;
    last=head;
    //For rest of nodes
    for(int i=1;i<n;i++){
        temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void displayLL(node *p){
    while(p){
        cout<<p->data<<' ';
        p=p->next;
    }
}

//Iterative Reversing LL -> Time Complexity is O(n); Space Complexity is O(1) coz no auxillary stack space due to recursion
void reverseLL(node *curr){
    node *prev=NULL,*next=NULL;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    displayLL(head);
}

//Recursive Reverse LL -> Time Complexity is O(n); Space Complexity is **O(n) coz of  extra auxillary stack space due to recursion
void RecreverseLL(node *prev,node *curr){
    if(curr){
        RecreverseLL(curr,curr->next);
        curr->next=prev;
    }
    //Now q reaches end of the linked list make head point to q
   else{
       head=prev;
   }
   displayLL(head);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    createLL(arr,n);
    displayLL(head);
    cout<<"\n";
    reverseLL(head);
    cout<<"\n";
    RecreverseLL(NULL,head);
    cout<<"\n";
}