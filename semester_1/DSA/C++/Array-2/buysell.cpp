#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n= prices.size();
    int minimal =prices[0];
    int profit=0;
    int maximal;
    for(int i=1;i<n;i++){
        maximal = prices[i];
        for(int j=0;j<i;j++){
            if(prices[j]<minimal){
                minimal = prices[j];
            }
        }
        if(maximal-minimal > profit){
            profit = maximal - minimal;
        }

    }
    return profit;

    }
 int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mini,maxi;
        mini = prices[0];
        maxi = -1;
        int k;
        for (int i =1;i<n;i++){
            if(prices[i]<mini){
                mini = prices[i];
                k = i;
            }
            if(k == n-1){
                return 0;
            }

        }
        for(int i=k+1;i<n;i++){
            if(prices[i]>maxi){
                maxi = prices[i];
            }
        }
        return maxi-mini;
    }

    int maxProfitop(vector<int>& prices) {
        int n= prices.size();
        int minimal = prices[0];
        int profit=0;
        int cost =0;
    for(int i=1;i<n;i++){
        cost = prices[i] - minimal;
        profit= max(profit,cost);
        minimal = min(minimal,prices[i]);

    }
    return profit;
    }

int main(){
    return 0;

}