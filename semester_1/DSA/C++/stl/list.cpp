#include <bits/stdc++.h>
using namespace std;

//for list doublely linked list is maintained

int main(){

    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(30);  //{2,30}


    ls.push_front(8); //{8,2,30}
    ls.emplace_front(20); //{20,8,2,30}

    //rest of the functions are same as the vector fuctions 
    // begin,end,clear,insert,erase, clear,swap


    return 0;

}