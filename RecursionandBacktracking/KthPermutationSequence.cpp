#include<bits/stdc++.h>
using namespace std;

 string getPermutation(int n, int k) {
        string res="";
        int fact=1;
        vector<int> v;
        
        for(int i=1;i<=n;i++){
        //Calculating the fact;
            fact*=i;
         //Pushing the numbers upto n   
            v.push_back(i);
        }
        
        k--; //Since it is zero based indexing
        //Keep adding to the vector till we dont reach the 
        while(v.size()>0){
            //Dividing the vector into blocks where the answer might be present in one block
            fact=fact/v.size();
            //append the string 
            res+=to_string(v[k/fact]);
            //erase that number as it is included in the ans
            v.erase(v.begin()+k/fact);
            //new value of k for the further subproblem
            k=k%fact;
        }
        return res;
    }