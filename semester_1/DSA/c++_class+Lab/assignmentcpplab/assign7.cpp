#include <iostream>
using namespace std;

int main(){
    double iamount;
    cout << "Enter the initial balance: ";
    cin>>iamount;
    cout <<endl;
    int no;
    cout << "Enter no: "<<endl<<"1. Check balance "<<endl<<"2. Deposite Money "<<endl<<"3. withdraw Money "<<endl<<"4. Exit  "<<endl;
    cin >>no;

    switch(no){
        case 1:
            cout << "Your current balance is: "<<iamount;
            break;

        case 2:
            double deposite;
            cout << "Enter the money to be deposted: ";
            cin>>deposite;
            if(deposite < 0.0){
                cout << "Invalid Input";
            }else{

                iamount += deposite;
            }
            cout << "current balance: "<<iamount;
            break;

        case 3:
            double withdraw;
            cout << "Enter the money to be withdraw: ";
            cin>> withdraw;
            if(withdraw < 0.0){
                cout << "Invalid Input";
            }else{
                iamount -= withdraw;
            }
            cout << "current balance: "<<iamount;
            break;
        case 4:
            cout<<"Thanks for using services!!";
            break;
        default:
            cout <<"Invalid Input!";

    }
    return 0;

}