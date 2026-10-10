#include <bits/stdc++.h>
using namespace std;

int leftr(int arr[],int n){
    int temp;
    temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
      
    }
    arr[n-1] = temp;
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftr(arr,n);
    return 0;
}
