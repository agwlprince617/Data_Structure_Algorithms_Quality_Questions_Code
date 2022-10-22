#include<bits/stdc++.h>
using namespace std;

void permute(string s,int l,int r){
    if (l==r) cout<<s<<"\n";
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permute(s,l+1,r);
        swap(s[l],s[i]);
    }
}

int main(){
    string s; cin>>s;
    int n=s.size();
    permute(s,0,n-1);
}

void solve(){
    if(v.size()==level){
        ans.push_back(root->data);
    }
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}

vector<int> leftView(Node *root){
    vector<int> ans;
    if(!root) return;
    solve(root,ans,0);
    return ans;
}