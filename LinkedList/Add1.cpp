//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

class Solution
{
    public:
    Node* reverse(Node* head){
        Node *next,*pre,*cur;
        pre=NULL;cur=head;next=NULL;
        while(cur){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        return pre;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node* cur=head;
        bool f=true;
        while(cur!=NULL and f==true){
            if(cur->next==NULL and cur->data==9){
                cur->data=1;
                Node* temp=new Node(0);
                temp->next=head;
                head=temp;
                cur=cur->next;
            }
            else if(cur->data==9){
                cur->data=0;
                cur=cur->next;
                
            }
            else{
                cur->data=cur->data+1;
                cur=cur->next;
                f=false;
            }
        }
        head=reverse(head);
        return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends