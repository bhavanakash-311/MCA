#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;

vector<int> leaders(vector<int> nums)
{
    int n = nums.size();
    vector<int> arr;
    int push = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(nums[i]>=nums[j])
            {
                push = 1;
            }
            else {
                push = 0;
                break;
            }
            
        }
        if(push == 1)
        {
            arr.push_back(nums[i]);
        }
    }
    arr.push_back(nums[n-1]);

    return arr;

}

vector<int> leadersop(vector<int> nums)
{
    int n = nums.size();

    //O(n)
    vector<int> arr;
    int maxi = INT_MIN;
    for(int i = n-1; i>= 0; i--)
    {
        if(nums[i]>=maxi){
            arr.push_back(nums[i]);
        }
        maxi = max(maxi,nums[i]);
        
    }
    int i = 0;
    int j = arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
            i++;
            j--;
        
    }
    return arr;
}


int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(22);
    nums.push_back(12);
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(6);

    vector<int> arr = leadersop(nums);
    for(auto it : arr){
        cout << it << endl;
    }
    

    return 0;

}