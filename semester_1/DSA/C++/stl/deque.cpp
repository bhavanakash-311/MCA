#include <bits/stdc++.h>
using namespace std;

// deque

int main(){

    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    //{4,3,1,2}

    dq.pop_back(); //{4,3,1}
    dq.pop_front(); //{3,1}

    cout << dq.back() << endl ;
   cout <<  dq.front();
    return 0;
}