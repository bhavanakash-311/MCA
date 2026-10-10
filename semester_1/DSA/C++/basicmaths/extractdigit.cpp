#include <bits/stdc++.h>
using namespace std;
//Time complexity O(log(N) base 10)
int countdigit(int n){
    int count =0;
    while(n>0){
        int lastdigit = n%10;
        n= n/10;
       
        count++;
    }
   return count;
}

int main(){
    int n;
    cin>> n;
    int res = countdigit(n);
    cout<< res;
    

    return 0;
}
