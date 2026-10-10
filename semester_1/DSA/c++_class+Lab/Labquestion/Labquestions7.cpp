#include <iostream>
using namespace std;

int total = 0;

void category(int weight){
    if(weight<=2){
        cout <<"LIGHT";
        total += 20;
    }
    else if(weight<=10){
        cout << "MEDIUM";
        total += 50;
    }
    else if(weight<=25){
        cout << "HEAVY";
        total += 100;
    }
    else{
        cout << "OVERSIZED";
        total += 200;
    }
    

}

int totalbill(){
    cout << "Your total bill is: ";
    cout << total <<endl;
}


int main(){
    int packagecount;
    cout <<"Enter the number of packages";

    string input;


    int weight;
    while(true){
        cout <<"Enter the weight: ";
        cin >>weight;
        category(weight);


    }
    return 0;
}