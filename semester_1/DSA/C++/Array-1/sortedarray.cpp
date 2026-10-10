#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    bool sort = true;
    for(int i =0; i<n; i++){
        if(arr[i]>arr[i+1]){
            sort = false;
            break;
        }
    }
    return sort;
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool issortedarr = issorted(arr,n);
    cout << issortedarr;
    return 0;

}