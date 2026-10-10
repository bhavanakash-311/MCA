#include <bits/stdc++.h>
using namespace std;

bool isprime(int x){
    if(x<2){
        return false;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            return false;
            break;
    
    }

}
return true;
}

int main(){
    int n;
    cin >> n;
    bool res = isprime(n);
    cout << res;
    return 0;
}