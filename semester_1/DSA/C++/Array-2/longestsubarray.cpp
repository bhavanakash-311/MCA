#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums){
    int n = nums.size();
    int maxi = INT16_MIN;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum = sum+ nums[j];
            maxi = max(sum,maxi);
        }
    }
    return maxi;
}

int maxSubArray_op(vector<int> &nums){

    int maxi = INT_MIN;
    int sum = 0;

    for (int i=0;i < nums.size();i++){
        sum += nums[i];
        if(maxi<sum){
            maxi = sum;
            if(sum<0){
                sum = 0;
            }
            
        }

    }
    return maxi;
    
}

int main()
{
    return 0;
}