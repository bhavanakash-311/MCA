#include <bits/stdc++.h>
using namespace std;

//tree is maintained for priority queue

//by default maximum heap is maintained

int main(){
    priority_queue<int> pq;  //maximum element stays at the top
    pq.push(5); //{5}
    pq.push(1); //{5,1}
    pq.push(10);  //{10,5,1}
    pq.push(8);   //{10,8,5,1}

    cout << pq.top();

    pq.pop();

    cout << pq.top();

    //Minimum Heap

    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(2);
    pq2.push(8);
    pq.emplace(10);  // {2,5,8,10}

    cout << pq.top();


    return 0;
}