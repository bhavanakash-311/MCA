#include <bits/stdc++.h>
using namespace std;

//map -> pair of key and value and every key has to be unique

int main(){

    map<int , int> mp;
    map<int , pair<int,int>> mpp;
    map<pair<int,int>,int> mp1;

    mp[1] = 2;   // key is 1 and value is 2 {1,2}
    mp.insert({3,1});
    mp.insert({2,4});

    // { {1,2},{2,4},{3,1}} sorted order accd. to the key 
    //if the key is same then sort using value

    mp1.insert({{2,3},10});
    mp1[{2,3}] = 10;

    //for each loop

    for(auto it : mp){
        cout << it.first << " " << it.second<< endl;
    }

    cout<< mp[1];
    cout << mp[5];   //returns null or 0 if not found

    auto it = mp.find(3);
    //cout << *(it).second;

    auto it = mp.find(5);  //return address next to the last element

    auto it = mpp.lower_bound(2);
    auto it =  mpp.upper_bound(3);



    //Multimap -> duplicate keys and sorted order
    multimap<int, int> mpp;


    //unordered map -> unique key but unsorted 
    //takes O(1) time complexity rather than O(logn) complexity

    unordered_map<int,int> ump;
    













    return 0;
}