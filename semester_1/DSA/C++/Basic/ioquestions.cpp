/*
Level 1 — Input, Output & Basic Operations
Print "Hello, World!".
Take your name and age as input and print them.
Take two numbers and print their sum, difference, product, and quotient.
Calculate the area of a circle.
Convert Celsius to Fahrenheit.
Swap two numbers using a third variable.
Swap two numbers without using a third variable.
Convert a given number of days into years, weeks, and days.
Calculate simple interest.
Find the last digit of a number. */

#include <bits/stdc++.h>
using namespace std;




int main(){
    cout << "Hello world" << endl;
    int age;
    string name;
    cin >> name >> age;
    cout << name << " " << age<< endl;

    int num1;
    int num2;
    cin >> num1 >> num2;
    cout << " the sum is " << num1+num2 << endl;
    cout << " the difference is " << num1 - num2 << endl;
    cout << " the product is " << num1*num2 << endl;
    cout << " the quotient is " << num1/num2 << endl;
     
    double rad;
    cin >> rad;
    double pi = 3.14159;
    double area = pi*rad*rad;
    cout << "the area of cicle is : "<<area <<endl;

    double cel;
    cin >> cel;
    double fah = (cel * (9.0/5.0))+32; //use the float because 9/5 = 1  9.0/5.0 = 1.8
    cout << " the temperature in fahrenheit is:" << fah <<endl;

    int num3, num4;
    cin >> num3 >> num4;
    int num5 = num3;
    num3 = num4;
    num4 = num5;
    cout << num3 << " "<<  num4 << endl;
    //c++ bulit in function swap to swap two numbers
    swap(num3,num4);
    cout << num3 << " "<<  num4 << endl;


    int num6, num7;
    cin >> num6 >> num7;
    num6 = num6 + num7;
    num7 = num6 - num7;
    num6 = num6 - num7;
    cout <<num6 <<" " <<num7<< endl;

    int days;
    cin >> days;
    int years = days / 365;
    int rdays = days % 365;
    int weeks = rdays / 7;
    rdays = rdays % 7;
    cout << years << " " << weeks << " " << rdays <<endl;
     

    double principal, rate,time;
    cin >> principal >> rate >> time;
    cout << " the simple interest is: " << (principal*time*rate)/100. << endl;

    int number;
    cin >> number;
    int lastdigit = number % 10;
    cout << " the last digit is: " << lastdigit;




    return 0;

}