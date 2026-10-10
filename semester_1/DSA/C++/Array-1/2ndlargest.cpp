#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int secondmax(int arr[],int n){
    int pmax = -1;
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            pmax= max;
            max= arr[i];

        }else if(arr[i] < max && arr[i] > pmax){
            pmax= arr[i];

        }
    }
    return pmax;
}                          

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n; i++){
        cin >> arr[i];
    }
    int secmaximum = secondmax(arr,n);
    cout<< secmaximum;
    return 0;
}
