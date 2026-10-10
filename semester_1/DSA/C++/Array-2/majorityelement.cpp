#include <bits/stdc++.h>
using namespace std;

int majorityElement_brute(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i] == nums[j])
                count ++;
            }
            if(count >= floor(n/2)){
                return nums[i];
            }
        }
        return -1;
    }
  int majorityElement_better(vector<int>& nums) {
        int n= nums.size();
        map<int, int> mp;
        // N log N
        for(int i=0;i<n;i++){
            mp[nums[i]]++; // {2,++}
        }
        // O(N)
        for(auto it :mp){
            if(it.second > n/2){
                return it.first;
            }
        }
        return 0;

    }
    int majorityElement_op(vector<int>& nums){
        int n = nums.size();
        int count =0;
        int element;
        for(int i=0;i<n;i++){
            if(count == 0){
                count++;
                element = nums[i];
            }
            if(element == nums[i]){
                count++;
            }else{
                count--;
            }

        }
        int countele = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                countele++;
        }
        if(countele > n/2){
            return element;
        }
        
    }
    return -1;
}

    //time complexity -> O(N logN) + O(N)
    //space complexity -> O(N)
    int main(){
    return 0;
}