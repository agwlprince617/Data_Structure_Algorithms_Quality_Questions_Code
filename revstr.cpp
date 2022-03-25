#include<bits/stdc++.h>
using namespace std;

//Sample Input GTCAG
//Reverse GACTG then compliment CTGAC

int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());

    for(int i=0;i<s.size();i++){
        if(s[i]=='G'){
            s[i]='C';
           
        } 
        else if(s[i]=='C'){
            s[i]='G';
            
        }
        if(s[i]=='A'){
            s[i]='T';
             
        } 
        else if(s[i]=='T'){
            s[i]='A';
            
        } 
    }

  
       cout<<s;
   
}