#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int x){

    int rnum = 0;
    int N=x;
    while(x!=0){
        int lastdigit = x%10;
        rnum = rnum*10 + lastdigit;
        x = x/10;
    }
    return N==rnum;
}

int main(){
    int n;
    cin>> n;
    int res = ispalindrome(n);
    cout<<res;


    return 0;
}