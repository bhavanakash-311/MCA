#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums)

{
    int n = nums.size();
    //handling empty array case
    if(n==0){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int maxi = 0;
    int count = 1;
    for(int i =0;i< n-1 ;i++){

        if(nums[i]==nums[i+1]){
            continue;
        }
        else if(nums[i]+1 == nums[i+1]){
            count++;
        }else{
            if(count > maxi){
                maxi = count;
            }
            count = 1;
        }

    }
    maxi = max(count,maxi);
    return maxi;
        
    }

int longestConsecutiveop(vector<int>& nums){
    unordered_set<int> s;
    for(auto it : nums){
        s.insert(it);
    }
    
}

int main(){
    vector<int> nums;
    nums.push_back(102);
    nums.push_back(4);
    nums.push_back(100);
    nums.push_back(1);
    nums.push_back(101);
    nums.push_back(3);
     nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);

    int res = longestConsecutive(nums);
    cout << res;
    
    
    return 0;
}