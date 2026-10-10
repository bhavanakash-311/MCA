#include <bits/stdc++.h>
using namespace std;
//time complexity is O(N)^2
int singleNumber(vector<int>& nums) {
    int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[j] == nums[i]){
                    count++;
                }
            }
            if(count==1) return num;
        }
        return -1;
    }
 
    //
    int singleNumberbetter(vector<int>& nums) {
    int n = nums.size();
    map<long long, int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]] ++;
    }
    for(auto it : mp){
        if(it.second == 1){
            return it.first;
        }
        
    }
    return -1;


    }
     int singleNumberop(vector<int>& nums) {
    int n = nums.size();
    int xornum = 0;
    for(int i =0; i<n;i++){
        xornum = xornum ^ nums[i];
    }
    return xornum;


    }

int main(){
     vector<int> arr;
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(5);
    int res = singleNumberbetter(arr);
    cout << res;

    return 0;
}