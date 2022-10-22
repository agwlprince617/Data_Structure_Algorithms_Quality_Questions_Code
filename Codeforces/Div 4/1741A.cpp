#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        string a,b;
        cin>>a>>b;
        char sa=a.back();
        char sb=b.back();
        if(sa==sb){
            if(a.size()==b.size()) cout<<"=";
            else if(sa=='S'){
                if(a.size()>b.size()) cout<<"<";
                else cout<<">";
            }
            else{
                 if(a.size()>b.size()) cout<<">";
                else cout<<"<";
            }
        }
        else{
            if(sa>sb) cout<<"<";
            else cout<<">";
        }
        cout<<"\n";
    }
}