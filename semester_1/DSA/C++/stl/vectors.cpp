#include <bits/stdc++.h>
using namespace std;

//for vectors singly linked list is maintained

int main(){

    vector<int> v;  //creates a empty container of dynamic size
    v.push_back(1);
    v.emplace_back(2);  //takes less time
    v.push_back(3);

    //vector with pair
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);  //don't have to give braces it will automatically detect
    
    //(size,element)
    vector<int> vec2(3,100); //{100,100,100}
    //(size) defined with garbage value
    vector<int> vec3(5); //vector of size 5 still size is dynamic

    //copy
    vector<int> v1(3,20);  //{20,20,20}
    vector<int> v2(v1);    //{20,20,20}


    //iterator
    //begin iterator
    // vector<int>::iterator it = v.begin(); //v{1,2} pointing to the memory address
    // it++;
    // cout<< *(it) <<" ";  //print second element
   //end iterator
   vector<int>::iterator i = v.end(); // points to the address next to the address of last element
   i--;
   cout << *(i) << " "; //print last element

   //access using the index
   cout << v[2] << " ";
   cout << v.back() << endl; //print the last element


   //printing using for loop
   for(vector<int>::iterator it = v.begin();it != v.end(); it++){
    cout << *(it) <<" ";
   }

   //auto -> automatically assings the iterator
   for(auto it = v.begin();it != v.end(); it++){
    cout << *(it) <<" ";
   }



   //erase function
   //{1,2,3}
   v.erase(v.begin()+1); //{1,3}

   //{10,20,30,40,50}
   v.erase(v.begin()+2,v.begin()+4); //[start,end)  //{10,20,50}


   //insert fuction (index,element)

   vector<int> v(2,100);   // {100,100}
   v.insert(v.begin(),300);   //{300,100,100}
   v.insert(v.begin()+1, 2,10);  //(300,10,10,100,100)

   vector<int> copy(2,50); //{50,50}
   v.insert(v.begin(),copy.begin(),copy.end()); //(50,50,300,10,10,100,100)

   cout<<v.size();

   //{10,20}
   v.pop_back(); //{10}


   //v1 {10,20}
   //v2 {30,40}
   v1.swap(v2); // v1 {30,40}  v2{10,20}
   v.clear(); //erases the entire vector

   cout << v.empty();   
    return 0;
}