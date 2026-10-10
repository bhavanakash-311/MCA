#include <iostream>
using namespace std;

double watercharge(double wateramount){
    double charge = 0;
    if(wateramount < 500){
        charge = (wateramount/100) * 2;
    }else{
        charge = (wateramount/100) * 3;
    }
    return charge;
}



int main(){
    string name;
    cout <<"enter your house name: ";
    getline(cin,name);
    cout <<endl;
    double wateramount;
    cout <<"Enter the water amount consumed: ";
    cin>>wateramount;
    cout <<endl;
    double charge = watercharge(wateramount);
    cout << "house name: " << name<<endl;
    cout << "Water consumed: " << wateramount<<endl;
    cout<< "Water charge: "<<charge<<endl;
    cout << "Maitance charge: 30 "<< endl;
    cout << "total amount: "<< charge+ 30<<endl;
    return 0;

}
