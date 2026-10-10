#include <bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                break;
                }   
            
        }
    }
    return v;       
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(3);
    v.push_back(12);
    v.push_back(64);
    v.push_back(36);
    
    vector<int> res = twoSum(v,15);
    for(auto it : res){
        cout << it << " ";
    }
    return 0;


}