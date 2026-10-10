#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
    int n =nums.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i=0;i<n;i++){
        if(nums[i]== 0){
            count0++ ;
        }
        else if(nums[i]== 1){
            count1++ ;
        }
        else{
            count2++ ;
        }
    }
    for(int i =0;i<count0;i++){
        nums[i] = 0;
    }
    for(int j = count0;j<count1+count0;j++){
        nums[j] = 1;
    }
    for(int k = count0+count1;k<n;k++){
        nums[k] = 2;
    }
        
    }

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    sortColors(v);
    for(auto it: v){
        cout << it;
    }

    return 0;
}