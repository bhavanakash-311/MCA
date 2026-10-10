#include <bits/stdc++.h>
using namespace std;

//stack LIFO  
//push pop top

int main(){
   stack<int> s;
   s.push(1); //{1}
   s.push(2); //{2,1}
   s.push(3); //{3,2,1}
   s.push(4); //{4,3,2,1}
   s.emplace(5); //{5,4,3,2,1}
   cout << s.top() <<endl;  //5
   
   s.pop(); //{4,3,2,1}
   cout << s.top() <<endl; //4

   cout << s.size() <<endl; //4
   cout << s.empty();  //flase -> 0

   stack<int> s1,s2;
   s1.swap(s2);


   return 0;
}