#include<bits/stdc++.h>
using namespace std;
    void countSubsets(int ind,int sum,vector<int> &arr,int N,vector<int> &v){
        if(ind>=N){
            v.push_back(sum);
            return;
        }
        //Pick the element
        countSubsets(ind+1,sum+arr[ind],arr,N,v);
        //Dont pick the element
        countSubsets(ind+1,sum,arr,N,v);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> v;
        countSubsets(0,0,arr,N,v);
        sort(v.begin(),v.end());
        return v;
    }