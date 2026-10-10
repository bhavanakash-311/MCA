#include <bits/stdc++.h>
using namespace std;

vector<int> movezeros(vector<int> &arr){
    int n = arr.size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int k =0;k<temp.size();k++){
        arr[k] = temp[k];
    }
    for(int l=temp.size();l<n;l++){
        arr[l] =0;
    }
}

vector<int> movezerosop(vector<int> &arr){
    int n = arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j == -1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(56);
    arr.push_back(9);
    arr.push_back(6);
    arr.push_back(5);
    movezerosop(arr);
    for(auto it: arr){
        cout<< it <<" ";
    }
    
    return 0;
}