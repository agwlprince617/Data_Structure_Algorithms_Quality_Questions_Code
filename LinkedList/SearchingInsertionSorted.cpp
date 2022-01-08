#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;

void createLL(int arr[],int n){
    struct node *temp,*last;
    //First node
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    //rest of nodes
    for(int i=1;i<n;i++){
        temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
node* searchLL(struct node *p,int ele){
    while(p){
         if(ele==p->data) return(p);   //returns the address
         p=p->next;
    }
    return NULL;
}
void display(struct node *p){
    while(p){
        cout<<p->data<<' ';
        p=p->next;
    }
}
void InsertSorted(node *p,int x){
    struct node *t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;
    //Inserting in a empty array
    if(first==NULL) first=t;
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        //if p didnt move forward means its value is smaller than the first node 
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    createLL(arr,n);
    display(first);
    int ele;
    cout<<"\nEnter element to be searched\n";
    cin>>ele;
    cout<<searchLL(first,ele)<<"\n";
    cout<<"Enter the element to be inserted\n";
    cin>>ele;
    InsertSorted(first,ele);
    display(first);
}