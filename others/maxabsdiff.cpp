#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    vector<int> finalseq;
    sort(arr,arr+n);

    for(int i=0;i<n/2;i++){
        finalseq.push_back(arr[i]);
        finalseq.push_back(arr[n-1-i]);
    }

    if(n%2!=0) finalseq.push_back(arr[n/2]);

    int maxSum=0;
    for(int i=0;i<n-1;i++){
        maxSum+=abs(finalseq[i]-finalseq[i+1]);
    }
    maxSum+=abs(finalseq[n-1]-finalseq[0]);
    cout<<maxSum<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
    return 0;
}