#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if(!root) return ans;
    	queue<Node*> q;
    	q.push(root);
    	int cnt=1;
    	while(!q.empty()){
    	    vector<int> res;
    	    int size=q.size();
    	    while(size--){
    	        Node* temp=q.front();
    	        res.push_back(temp->data);
    	        q.pop();
    	        if(temp->left) q.push(temp->left);
    	        if(temp->right) q.push(temp->right);
    	    }
    	   if(cnt%2==0) reverse(res.begin(),res.end());
    	   for(int i=0;i<res.size();i++){
    	       ans.push_back(res[i]);
    	   }
    	   cnt=!cnt;
    	}
    	return ans;
    }
};