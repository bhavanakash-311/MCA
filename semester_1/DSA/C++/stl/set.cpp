#include <bits/stdc++.h>
using namespace std;

//set -> sorted, unique element
//internally a tree is maintained
int main(){
    set<int> st;
    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}  //sorted and unique
    
    auto it = st.find(3);     //find function returns the iterator
    auto it = st.find(6);     //element not found-> return the next address to the last element

    st.erase(5);    //takes logrithmic time

    int cnt = st.count(1);   //returns 1 or 0

    auto it = st.find(1);
    st.erase(it);  //takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);  // erases 2,3 


    //multiset -> sorted but not unique
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);  //{1,1,1,2}
    
    ms.erase(1); //all 1's erased
    int cnt = ms.count(1);

    auto it = ms.find(1);
    ms.erase(it); //erase only the fisrt 1

    //rest all the fuction is same as set


    //unordered set-> not sorted but unique
    unordered_set<int> us;
    //lower and upper bound fun doesn't exist 
    //rest all the fuctions are same 
    //gives O(1) complexity in most of the cases

    


    return 0;
}