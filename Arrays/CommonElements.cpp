#include<bits/stdc++.h>
using namespace std;
//Time Complexity is O(n1+n2+n3) and Space Complexity is O(n)
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
            //code here.

        vector<int> ans;
        int i=0,j=0,k=0;

        while(i<n1 and j<n2 and k<n3){
            if(A[i]==B[j] and B[j]==C[k] and A[i-1]!=A[i]){
                ans.push_back(A[i]);
                i++; j++; k++;
            }
            else if(A[i]<B[j]) i++;
            else if(B[j]<C[k]) j++;
            else k++;
        }
        return ans;    
         
}


//Using Sets STL
//Time Complexity is O(n1+n2+n3) and Space Complexity is O(n)
 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_set<int> p,q,r;
            for(int i=0;i<n1;i++){
                p.insert(A[i]);
            }
            for(int i=0;i<n2;i++){
                if(p.find(B[i])!=p.end()){
                    q.insert(B[i]);
                }
            }
            vector<int> ans;
            for(int i=0;i<n3;i++){
                if(q.find(C[i])!=q.end()){
                    ans.push_back(C[i]);
                    r.insert(C[i]);
                    q.erase(C[i]);
                }
            }
            return ans;
        }