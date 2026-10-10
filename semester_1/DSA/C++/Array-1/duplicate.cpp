#include <bits/stdc++.h>
using namespace std;

//remove duplicate inpalce and return number of unique element

int uniqueele(int arr[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);


        
    }
    int index = 0;
    for(auto it: st){
        arr[index]= it;
        cout<<arr[index]<<" ";
        index++;
        }
    cout<<endl;
    return index;
}

int uniqueeleop(int arr[],int n){
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int uElement = uniqueele(arr,n);
    cout <<"Number of unique element: "<< uElement;
    return 0;
}  