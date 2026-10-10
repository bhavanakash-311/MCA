#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n);
    int k=0,l=1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            result[k]=nums[i];
            k = k+2;

        }
        else{
            result[l]=nums[i];
            l = l+2;
        }
    }
    return result;
    
}

int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(-2);
    arr.push_back(-5);
    arr.push_back(2);
    arr.push_back(4);
    vector<int> res = rearrangeArray(arr);
    for(auto it : res){
        cout << it;
    }
    return 0;
}