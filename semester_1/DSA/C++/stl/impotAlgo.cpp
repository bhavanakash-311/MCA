#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int, int >p2){
    if (p1.second < p2.second) true;
    if(p1.second > p2.second)  false;

    if(p1.first > p2.first) true;
    if(p1.first < p2.first) false;
}
int main(){

    //sort fuction takes iterator [start,end)
    int arr[] ={5,2,1,4,7};
    auto a = arr;
    sort(a,a+5);
    //{1,2,4,5,7}
    for(int i=0;i<=4;i++){
        cout << arr[i]<<" ";
    }
    vector<int> v;
    sort(v.begin(),v.end());
    sort(a+2,a+5); //sort subpart of arr

    pair <int, int> a[] = {{1,2},{3,4},{4,6},{4,5}};
    //sort it according to second element if 
    //second element is same then sort according to first but in desc order

    sort(a,a+4,comp);

    int num = 7;
    int cnt = __builtin_popcount(num); //counts the number of 1's in the binary of num

    long long num = 47298384729;
    int cnt = __builtin_popcountll(num);

    //permutation

    string s = "123";
    sort(s.begin(),s.end()); //to get all the permutation
    do{
        cout<< s<< endl;
    }while(next_permutation(s.begin(),s.end()));   //"123","132","213","231",...
    
    int maxi = *max_element(a,a+4); // to get the maximum element


    return 0;
}