#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    if(n==1) cout<<arr[0]<<endl;
    //Check if it contains no zeroes and even negative numbers
    int cz=0,c_neg=0;
    int max_neg=INT_MIN;
    int prod=1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cz++;
            continue;
        }
        if(arr[i]<0){
            c_neg++;
            max_neg=max(arr[i],max_neg);
        }
        prod*=arr[i];
    }

    if(cz==n) cout<<0<<endl;
    if(c_neg & 1){
        if(c_neg==1 && cz>0 && c_neg+cz==n) cout<<0<<endl;
        prod=prod/max_neg;
    }
    cout<<prod<<endl;
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