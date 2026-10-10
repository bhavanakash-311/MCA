#include <bits/stdc++.h>
using namespace std;

//time complexity :O(k)+O(n-k)+o(k) = O(n+k)= O(n)
//Space complexity: O(k) //for temp vector of size k

vector<int> leftrotate(vector<int> &arr,int k){
    int n =arr.size();
    k= k%n;   
    vector<int> temp;
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    for(int j=k;j<n;j++){
        arr[j-k]=arr[j];
    }
    for(int l=n-k;l<n;l++){
        arr[l]= temp[l-(n-k)];
    }

}

//optinal solution 
//reserve(0 to k) reserve(k+1 to n-1) reserve (0 to n-1)
//time complexity O(k)+ O(n-k) +O(n) = O(2n)
//time complexity slightly inceases 
//space complexity  O(1)

vector<int> reverse(vector<int> &arr,int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = arr[start];
        start++; end--;
    
    }
    return arr;
}

vector<int> lrotateop(vector<int> &arr,int k){
    int n = arr.size();
    reverse(arr,0 ,k-1);
    reverse(arr, k,n-1);
    reverse(arr,0, n-1);

    return arr;

}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    int k;
    cin>>k;
    leftrotate(arr,k);
    for(auto it: arr){
        cout<< it <<" ";
    }
  return 0;
}