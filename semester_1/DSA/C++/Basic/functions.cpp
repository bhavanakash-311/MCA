#include <bits/stdc++.h>
using namespace std;

//function 
//void, return, parametrized, non parametrized
//pass by value
//pass by refence 

// int sum(int num1,int num2){
//     int s = num1 + num2;
//     return s;
// }

// int main(){
//     int num1;
//     int num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << " The sum is : " << res;
//     return 0;
// }



//pass by value
//no change in actural string
void dosomething(string s){
    s[0]= 'B';
    cout << s;

}

//array in always pass by reference
//pass by refence
//chnage in the actural string
void doingsomething(string &s){
    s[0]='R';
    cout << s;
}

int main(){
    string s= "cat";
    dosomething(s);
    cout << endl;
    cout << s;
    cout << endl;
    doingsomething(s);
    cout << endl;
    cout << s;
    
    return 0; 
}