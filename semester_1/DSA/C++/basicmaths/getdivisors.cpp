#include <bits/stdc++.h>
using namespace std;

//time complexity O(n​logn)
set<int> getDivisors(int n) {
        set<int> st;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
               st.insert(i);
               st.insert(n/i);
            }
        
        }
        return st;
    }

//if sorted not required then time complexity O(sqrt n)   
vector<int> getDivisorsop(int n) {
    //time complexity O(sqrt(n))
        vector<int> v;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
               v.push_back(i);
               if(n/i != i){
                   v.push_back(n/i);
               }
            }
            
        }

        // sort time complexity O(no. of factors(log (no. of factors))
        sort(v.begin(),v.end());
        return v;
    }

int main(){
    int n;
    cin>> n;
    set<int> res = getDivisors(n);
    vector<int> res2 =getDivisorsop(n);

    for(auto it: res){
        cout << it << " ";
    }
    cout<<endl;
     for(auto it: res2){
        cout << it << " ";
    }

    return 0;
}