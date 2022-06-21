
#include <bits/stdc++.h> 
using namespace std; 
//Always the top element will be the greatest element in the stack

 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans;
        stack<long long> s;
        s.push(arr[n-1]);
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(!s.empty() and s.top()<=arr[i]) s.pop();
            
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top());
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


// Simple C++ program to print
// next greater elements in a
// given array
#include<iostream>
using namespace std;

/* prints element and NGE pair
for all elements of arr[] of size n */
void printNGE(int arr[], int n)
{
	int next, i, j;
	for (i = 0; i < n; i++)
	{
		next = -1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << " -- "
			<< next << endl;
	}
}

// Driver Code
int main()
{
	int arr[] = {7,8,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)
