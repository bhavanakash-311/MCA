#include <bits/stdc++.h>
using namespace std;

//only true for three digit number

bool isarmstrong(int x){
    int N =x;
    int num = 0;

    while(x>0){
        int lastdigit = x%10;
        num =  lastdigit*lastdigit*lastdigit + num;
        x = x/10;

    }
    return (N == num);
}

int main(){
      int n;
    cin>> n;
    int res = isarmstrong(n);
    cout<<res;
    return 0;
}