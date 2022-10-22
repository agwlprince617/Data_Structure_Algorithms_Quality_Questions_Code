#include<bits/stdc++.h>
using namespace std;

void solve(){
 char ans='B';
 for(int i=0;i<8;i++){
    string row;
    cin>>row;
    if(row=="RRRRRRRR") ans='R';
 }
 cout<<ans<<"\n";
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}
