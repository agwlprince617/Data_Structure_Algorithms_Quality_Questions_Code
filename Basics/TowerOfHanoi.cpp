#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        long long count=pow(2,n);
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        }
        toh(n-1,from,aux,to);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(n-1,aux,to,from);
        return count-1;
    }
};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends


int n;
cin>>n;
toh(n,1,3,2);


void toh(int n,char A,char C, char B){
    long long count=pow(2,n);
    if(n==1){
        cout<<"Disk"<<n<<"moved from"<<A<<"to"<<C;
    }
    toh(n-1,A,B,C);
    cout<<"Disk"<<n<<"moved from"<<A<<"to"<<C;
    toh(n-1,B,C,A);
}