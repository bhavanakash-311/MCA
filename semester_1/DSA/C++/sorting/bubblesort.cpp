#include <bits/stdc++.h>
using namespace std;

//Time complexity : O(n)^2
//best : O(n)  //using swapped variable
//stable sorting
//inplace algorithm

vector<int> bubblesort(vector<int>& arr){
    int n= arr.size();
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
                }
            }
            //if it doesn't swap for any particular i then arr is sorted
            //break the loop
            if(!swapped){
                break;
            }
        }
    return arr;
    }

int main(){
    vector<int> arr;
    arr.push_back(34);
    arr.push_back(45);
    arr.push_back(12);
    arr.push_back(3);
    arr.push_back(15);
    arr.push_back(22);
   bubblesort(arr);
   for(auto it: arr){
    cout<< it <<" ";
   }
   return 0;
}