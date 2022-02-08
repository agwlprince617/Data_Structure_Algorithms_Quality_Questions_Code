#include<bits/stdc++.h>
using namespace std;

//Brute Force
//Time Complexity is O(n*2) and Space Complexity O(1)
void countPairs(int arr[],int k,int n){
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cnt++;
            }
        }
    }
 
}

//Time Complexity is O(n) and Space Complexity O(n)
//Efficient Approach
void countPairs(int arr[],int k,int n){
    unordered_map<int,int> m;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(m.find(k-arr[i])!=m.end()){
            cnt+=m[k-arr[i]];
        }
        m[arr[i]]++;    
    }
}



//Count Distinct pairs with given sum
// Time Complexity: O(N) 
// Auxiliary Space: O(N)
// C++ program to implement
#include <bits/stdc++.h>
using namespace std;

int cntDisPairs(vector<int> arr, int target) {
	unordered_set<int> set;
	unordered_set<int> seen;
	
	int count = 0;
	
	for(int num : arr) {
		if(set.find(target-num) != set.end() && seen.find(num) == seen.end() ) {
			count++;
			seen.insert(num);
			seen.insert(target-num);
		}
		set.insert(num);
	}
	return count;
}

int main()
{
	vector<int> arr = { 1, 5, 1, 5};
	int K = 6;
	cout << cntDisPairs(arr, K);
}


// COntiguous Subarray Sum
// https://leetcode.com/problems/subarray-sum-equals-k/submissions/