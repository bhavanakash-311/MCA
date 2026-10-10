#include <bits/stdc++.h>
using namespace std;
//Time complexity : O(N)^2
//best : O(N)^2
//not stable

int maxIndex(vector<int> &arr,int start,int last){
    int max=start;
    for(int i=0;i<=last;i++){
        if(arr[max]<arr[i]){
            max = i;
        }
    }
    return max;
}
vector<int> selectionsort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i < n-1;i++){
        int last=n-i-1;
        int max= maxIndex(arr,0,last);
        swap(arr[max],arr[last]);
    }

    return arr;
}

int main(){
    vector<int> arr;
    arr.push_back(34);
    arr.push_back(45);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(15);
    arr.push_back(22);
    selectionsort(arr);
    for(auto it : arr){
        cout<< it<< " ";
    }
    return 0;
}