/*Level 2 — If-Else & Conditions
Check whether a number is positive, negative, or zero.
Check whether a number is even or odd.
Find the greater of two numbers.
Find the greatest of three numbers.
Check whether a year is a leap year.
Check whether a character is a vowel or consonant.
Check whether a person is eligible to vote.
Check whether a number is divisible by both 3 and 5.
Create a simple calculator using switch.
Assign grades based on marks.*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int num1,num2;
    char op;
    cin >> num1 >> num2;
    cin >> op;
    switch(op){
        case '+':
        cout << " Sum is: "<< num1 + num2;
        break;
        case '-':
        cout << " difference is: "<< num1 - num2;
        break;
        case '*':
        cout << " Product is: "<< num1 * num2;
        break;
        case '/':
        cout << " quotient is: "<< num1 / num2;
        break;
        default:
        cout<< "Invalid operator";

    }
    
    return 0;
}