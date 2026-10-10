#include <iostream>
using namespace std;

void scharge(int sandwichno){
    cout << "No of sanwiches ordered: "<<sandwichno<<endl;   
    cout << "Subtotal of sandwich: "<<80*sandwichno<<endl;
}
void bcharge(int burgerno){
    cout<< "No of burger ordered: "<<burgerno<<endl;
    cout << "Subtotal of burger : "<<120*burgerno<<endl;
}
void pcharge(int pastano){
    cout << "No of pasta ordered: "<<pastano<<endl;
    cout << "Subtotal of pasta: "<<150*pastano<<endl;
}

int main(){
    int sandwichno, burgerno, pastano;
    cout << "Enter the no of items for sandwich, burger, pasta: ";
    cin >> sandwichno >> burgerno >>pastano;
    cout <<endl;
    scharge(sandwichno); cout <<endl;
    pcharge(pastano); cout<<endl;
    bcharge(burgerno); cout <<endl;

    int total =80*sandwichno+120*burgerno+150*pastano;
    if(total >= 500){
        cout <<"Discount of 5% is applicable.";
        total= total*0.95;
    }
    cout << "Total payable amount: "<<total;


    
    return 0;
}