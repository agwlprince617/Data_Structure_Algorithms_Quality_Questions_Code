#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n,m;
		cin>>n>>m;
		if(n%2==0)
		{
			cout<<n<<"\n";
		}
		else if(m%2!=0)
		{
			cout<<m<<"\n";
		}
	}
	return 0;
}