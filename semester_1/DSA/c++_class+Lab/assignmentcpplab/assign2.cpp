#include <iostream>
using namespace std;


double datacharge(double datausage){
    double charge = 0;
    
    if(datausage<= 2){
        cout << "2GB plan"<<endl;
        cout << "No additional charge"<<endl;
        charge =  100;

    }
    else if(datausage <=5){
        cout << "5GB plan" <<endl;
        cout << "No additional charge"<<endl;
        charge = 200;

    }
    else if(datausage<=10){
        cout << "10GB plan" <<endl;
        cout << "No additional charge"<<endl;
        charge = 350;
    }
    else{
        cout << "More than 10GB" <<endl;
        cout << "Additional charge: 100"<<endl;
        charge = 450;
        }
        return charge;
}

int main(){
    string name;
    double datausage;
    cout << "Enter your name: ";
    cin>>name;
    cout <<endl;
    cout << "Enter the datausage";
    cin>>datausage;
    cout <<endl;
    if(datausage<0){
        cout<< "Invalid Input";
    }else{
        double charge=datacharge(datausage);
        cout << "your payable amount is: ";
        cout<<charge;
    }

    return 0;
}
