#include<bits/stdc++.h>
using namespace std;


//TC is O(N*3*logn) Sc is O(M*4) M is the size of the array maximum unique quadruples
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1,h=n-1;
                while(l<h){
                    if(nums[i]+nums[j]+nums[l]+nums[h]==target){
                            vector<int> t;
                            t.push_back(nums[i]);t.push_back(nums[j]);
                            t.push_back(nums[l]);t.push_back(nums[h]);
                            ans.insert(t);
                    }
                    else if(nums[i]+nums[j]+nums[l]+nums[h]<target) l++;
                    else h--;
                }
            }
        }
        for(auto it:ans){
            res.push_back(it);
        }
        return res;
    }


//TC is O(n*3) Sc is O(1)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
         vector<vector<int> > res;
        
        if (num.empty())
            return res;
        int n = num.size(); 
        sort(num.begin(),num.end());
    
        for (int i = 0; i < n; i++) {
        
            int target_3 = target - num[i];
        
            for (int j = i + 1; j < n; j++) {
            
                int target_2 = target_3 - num[j];
            
                int front = j + 1;
                int back = n - 1;
            
                while(front < back) {
                
                    int two_sum = num[front] + num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;
    }
};

int main()
{
    Solution obj;
    vector<int> v{1,0,-1,0,-2,2};
    
    vector<vector<int>> sum=obj.fourSum(v,0);
    cout<<"The unique quadruplets are"<<endl;
    for (int i = 0; i < sum.size(); i++) {
        for (int j = 0; j < sum[i].size(); j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}