#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    int i=2;
    while(i*i <= n){
        if(n % i == 0){
            return false;
        } i++;
    }
    return true;

}
int main(){
    int num;
    cin>> num;
    if (num <=1){
        cout << "Invalid";
    }
    else {
        if (isprime(num)){
            cout << "prime";
        }else {
            cout << "Not Prime";
        }
    }
    return 0;
}