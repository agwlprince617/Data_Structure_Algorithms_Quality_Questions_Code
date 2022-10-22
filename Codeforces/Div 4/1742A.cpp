#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int tc; cin>>tc;
//     while(tc--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         int x,y,z;
//         x=a+b;
//         y=b+c;
//         z=c+a;
//         if((x==c) or (y==a) or (z==b)) cout<<"YES";
//         else cout<<"NO";
//         cout<<"\n";
//     }

// }

void fub(int n){
    if(n==0) return;
    fub(n-1);
    cout<<n<<" ";
}

int main(){
    fub(10);
}