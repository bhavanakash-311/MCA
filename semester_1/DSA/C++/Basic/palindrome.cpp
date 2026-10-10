#include <bits/stdc++.h>
using namespace std;

int reversenum(int num){
    int reverseNum =0;
    
    while(num > 0){
        int digit = num%10;
        reverseNum = (reverseNum*10) + digit;
        num = num/10;
    }
    return reverseNum;
}

int main(){
    int num;
    cin >> num;
    if (num == reversenum(num)){
        cout << "palindrome";
    }else cout << "Not a palindrome number";
    return 0;
}