#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int r,c;
        cin>>r>>c;
        // if(r==1 or c==1) cout<<r<<" "<<c<<"\n";
        // else{
        //     if((r==2 and c==3) or (r==3 and c==2) or (r==3 and c==3)){
        //     cout<<r-1<<" "<<c-1<<"\n";
        // }
        // else{
        //     cout<<r<<" "<<c<<"\n";
        // }
        // }
        cout<<r/2+1<<" "<<c/2+1<<"\n";
        
    }
}