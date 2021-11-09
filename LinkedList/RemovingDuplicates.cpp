#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
}*first=NULL;

void createLL(int arr[],int n){
   struct node *temp,*last;
   first=new node;
   first->data=arr[0];
   first->next=NULL;
   last=first;

   for(int i=1;i<n;i++){
       temp=new node;
       temp->data=arr[i];
       temp->next=NULL;
       last->next=temp;
       last=temp;
   }
}

void display(struct node *p){
    while(p){
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<"\n";
}

void RemoveDuplicates(node *p){
    node *q;
    q=p->next;
    while(q){
        if(p->data!=q->data){
             p=q;  
             q=q->next;
        }
        else{
            p->next=q->next; 
            delete q;
            q=p->next;
        } 
    }
}

int main(){
  int n; cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  createLL(arr,n);
  display(first);
  RemoveDuplicates(first);
  display(first);
}