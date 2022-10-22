#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next; 
}*first=NULL;


void createLL(int arr[],int n){
    node *temp,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        node *temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}



int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    createLL(arr,n);
    reverseEven(first);
    display(first);
}
// int main(){
//     int n; cin>>n;
    
//     stack<int> st;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         if(num%2==0){
//             st.push(num);
//         }
//         else{
//             if(!st.empty()){
//                 while(!st.empty()){
//                      cout<<st.top()<<" ";
//                      st.pop();
//                 }
//             }
//               cout<<num<<" ";
//         }
      
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }