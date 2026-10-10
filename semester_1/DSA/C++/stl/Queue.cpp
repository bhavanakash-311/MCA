#include <bits/stdc++.h>
using namespace std;

//Queue  FIFO
int main(){
    queue<int> qu;
    qu.push(12); //pushes at back
    qu.push(23);
    qu.push(34); //{12,23,34}
    qu.emplace(56);
    //{12,23,34,56}

    qu.back() += 5;

    cout << qu.back()<< endl;
    cout<< qu.front()<< endl;
    qu.pop();  //pops out from front
    cout <<qu.front();


    return 0;
}