#include <bits/stdc++.h>
using namespace std;
int maxMem(vector<vector<int>>&m){
	vector<int>rst;
	for(int i=0;i<m.size();i++)
	{
		rst.push_back(*max_element(m[i].begin(),m[i].end()));
	}
	return *max_element(rst.begin(),rst.end());
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>>m;
		for(int i=0;i<n;i++){
			vector<int>col;
		for(int j=0;j<2;j++)
	    {
	    	int x;
	    	cin>>x;
	    	col.push_back(x);
	    }
	    m.push_back(col);
		}
        cout<<maxMem(m)<<endl;
	}
	return 0;
}