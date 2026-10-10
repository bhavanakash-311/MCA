#include <bits/stdc++.h>
using namespace std;

//algorithms containers functions iterators

//pairs 



int main(){

    
    pair<int, int> p = {1,3};
    cout << p.first << p.second ;
    //nested pair
    pair<int, pair <int , int >> q = {1,{2,3}};
    cout << q.second.first;
    //arr of pair
    pair<int, int> arr[] = {{1,2},{3,4},{4,5}};
    cout << arr[1].second;

    return 0;
}