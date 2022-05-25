#include<bits/stdc++.h>
using namespace std;

//Kadenes Algo
 int maxProfit(vector<int>& prices) {
        int curr_max=0,max_so_far=0;
        
        for(int i=1;i<prices.size();i++){
            curr_max=max(0,curr_max+=prices[i]-prices[i-1]);
            max_so_far=max(curr_max,max_so_far);
        }
        return max_so_far;
    }


//Normal Method
int maxProfit(vector<int>& prices) {
        int profit=0;
        int min_price=prices[0];
        for(int i=1;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            profit=max(profit,prices[i]-min_price);
        }
        return profit;
    }    
