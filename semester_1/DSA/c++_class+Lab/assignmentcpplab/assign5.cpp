#include <iostream>
using namespace std;

double wage(int hourlywage,int totalhours){
    double charge = 0;
    if(totalhours <= 40){
        charge = hourlywage*totalhours;
    }else{
        charge = hourlywage*40 +1.5*(totalhours-40); 
    }
    return charge;
}

int main(){
    string name;
    int hourlywage;
    int totalhours;
    cout << "Enter your name: ";
    cin>>name;
    cout <<endl;
    cout << "Enter the hourly wage: ";
    cin >> hourlywage;
    cout <<endl;
    cout << "Enter the total no of hours worked in the week: ";
    cin >>totalhours;
    cout << endl;
    double charge = wage(hourlywage,totalhours);
    if(charge <= 10000){
        cout << "REGULAR EARNER!"<<endl;
    }else{
        cout << "HIGH EARNER!"<<endl;
    }
     
    cout << "Your total earing is: "<<charge;

    return 0;
}