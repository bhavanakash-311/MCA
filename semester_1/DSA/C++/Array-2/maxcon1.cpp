#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int maxi = 0;
    int count = 0;
    for(int i =0;i<n; i++){
        if (nums[i] == 1){
            count++;
            maxi = max(count,maxi);
        }else count = 0;
        
    }
    return maxi;
        
    }

int main(){
     vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    int res = findMaxConsecutiveOnes(arr);
    cout<< res;

    return 0;
}