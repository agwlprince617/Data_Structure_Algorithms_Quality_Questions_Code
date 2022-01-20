#include<bits/stdc++.h>
using namespace std;
 void sort012(int a[], int n)
    {
        // coode here 
        int czero=0,cone=0,ctwo=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) czero++;
            else if(a[i]==1) cone++;
            else ctwo++;
        }
        
        for(int i=0;i<czero;i++) a[i]=0;
        for(int i=czero;i<czero+cone;i++) a[i]=1;
        for(int i=czero+cone;i<n;i++) a[i]=2;
    }

//Time Complexity is O(n) Space Complexity is O(1);    