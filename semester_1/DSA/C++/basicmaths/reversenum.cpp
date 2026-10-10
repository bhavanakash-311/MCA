#include <bits/stdc++.h>
using namespace std;

int reversenum(int x){
   
    int rnum = 0  ;
    while(x!=0){
        int lastdigit = x%10;
        if(rnum > INT_MAX /10 || rnum> INT_MIN/10){
            return 0;
        }
        rnum = rnum*10 + lastdigit;
        x = x/10;
    }
    return rnum;
}

int main(){
    int n;
    cin>> n;
    int res = reversenum(n);
    cout<<res;


    return 0;
}