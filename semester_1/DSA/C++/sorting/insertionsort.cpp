#include <bits/stdc++.h>
using namespace std;

//Time complexity O(N)^2
//best : O(N)
//stable sort
//used for smaller values of n and
//useful when the array is partially sorted ->Takes part in 
//hybrid sorting algorithms.

vector<int> insertionsort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<= n-2;i++){
        int j=i+1;
        bool swapped =false;
        while(j>0){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swapped = true;
            }
            if(!swapped){
                break;
            }
            j--;
        }

    }

}

int main(){

    vector<int> arr;
    arr.push_back(34);
    arr.push_back(45);
    arr.push_back(12);
    arr.push_back(3);
    arr.push_back(15);
    arr.push_back(22);
    insertionsort(arr);
   for(auto it: arr){
    cout<< it <<" ";
   }
    return 0;
}