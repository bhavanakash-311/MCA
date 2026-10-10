#include <iostream>
using namespace std;
int billprice = 0;


void choosePackage(){
    cout <<"Choose the package: ";
    cout <<"1.Basic-wash  2.Premium  3.Interior+exterior  4.Full Detailing: ";
    int n;
    cin>>n;
     switch(n){
            case 1:
                billprice = 250;
                break;
            case 2:
                billprice = 450;
                break;
            case 3:
                billprice = 700;
                break;
            case 4:
                billprice = 1200;
                break;
            default:
                cout<<"Invalid Input";
        }

}

void chooseServices(){
    cout <<"Choose the package: ";
    cout <<"1.Waxing  2.Tire-Polishing  3.Engine-cleaning: ";
    int n;
    cin>>n;
    switch(n){
            case 1:
                billprice += 150;
                break;
            case 2:
                billprice += 100;
                break;
            case 3:
                billprice += 250;
                break;
            default:
                cout<<"Invalid Input";
        }

}

int discount(int billtotal){
    int damount = 0;
    if (billtotal< 500 ){

        cout << "Discount: Rs."<<damount<<endl;
        return billprice-damount;
    }
    else if(billtotal<=999){
        damount = billprice* 0.05;
        cout << "Discount: "<< damount<<endl;
        return billprice-damount;
    }
    else{
        damount = billprice* 0.10;
        cout << "Discount: "<< damount<<endl;
        return billprice-damount;
        
    }
    return billprice;

}

int main(){
    string name;
    cout <<"enter your name: ";
    cin>>name;
    cout <<endl;
    choosePackage();
    string input="yes";


    while(true){
        chooseServices();
        cout << "Type exit when servies are choosen: ";
        cin>> input;
        if(input == "exit"){
            break;
        }
        
    }
    cout <<"Subtotal: "<<billprice<<endl;
    int final = discount(billprice);
    cout << "Final: "<<final<<"Rs.";

    return 0;
}