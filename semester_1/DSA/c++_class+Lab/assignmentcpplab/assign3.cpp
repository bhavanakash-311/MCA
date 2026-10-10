#include <iostream>
using namespace std;

int parkcharge(string type,double hours ){
    double charge;
    if(type == "car"){
        if(hours <= 2){
            charge = 40;
        }else{
            charge = 40 + (hours - 2)*20;
        }
    }
    else if(type == "bike"){
        if(hours <= 2){
            charge = 20;
        }else{
            charge = 20 + (hours - 2)*10;
        }
    }
    else{
        if(hours <= 2){
            charge = 30;
        }else{
            charge = 30 + (hours - 2)*15;
        }
    }
    return charge;
}

int main(){
    string type;
    double hours;
    cout << "Enter the type of the vehicle: ";
    getline(cin,type);
    cout <<endl;
    cout << "No of hours:" ;
    cin>> hours;
    cout <<endl;
    double fee = parkcharge(type,hours);
    cout << "hey! Your parking is: "<<fee<<endl;
    cout << "vehicle type: "<<type<<endl;
    cout << "Parking duration: "<< hours <<endl;



    return 0;
}