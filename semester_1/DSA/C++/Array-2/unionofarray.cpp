#include <bits/stdc++.h>
using namespace std;

vector<int> unionarray(vector<int> arr1,vector<int> arr2){
    set<int> st;
    int n1 = arr1.size();
    int n2 = arr2.size();

    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int> unionarr;
    for(auto it : st){
        unionarr.push_back(it);
    }
    return unionarr;
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    
    vector<int> arr2;
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(5);
    vector<int> res = unionarray(arr1,arr2);
    for(auto it : res){
        cout<< it << " ";
    }

    return 0;
}