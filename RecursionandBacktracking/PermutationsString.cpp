#include<bits/stdc++.h>
using namespace std;



//Using extra space 
   void findPermute(vector<int> &nums,vector<int>&ds,vector<vector<int>> &ans,bool freq[]){
        if(nums.size()==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                findPermute(nums,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        bool freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        findPermute(nums,ds,ans,freq);
        return ans;
    }        

    //Most optimised using less space
    void permute(int ind,vector<int> &nums,vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            permute(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permute(0,nums,ans);
        return ans;
    }




//Using stl next permutation
	vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<string> v;
		    do{
		        v.push_back(S);
		    }while(next_permutation(S.begin(),S.end()));
		    return v;
		}    
