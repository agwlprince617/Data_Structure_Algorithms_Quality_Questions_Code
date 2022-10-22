#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        
        int cnt=1;
        int previous=v[0].first;
        
        for(int i=1;i<v.size();i++){
            if(previous<v[i].second){
                cnt++;
                previous=v[i].first;
            }
        }
        return cnt;
    }
};




