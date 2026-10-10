#include <iostream>
using namespace std;

void percentage(double conducted,double attented){
    double cpercentage = (attented/conducted) * 100;
    if(cpercentage >= 74.99){
        cout << "Attendance percentage: "<<cpercentage<<endl;
        cout <<"Status: Eligible";
        
        
    }
    if(cpercentage >= 60.0){
        cout << "Attendance percentage: "<<cpercentage<<endl;
        cout <<"Status: conditionally Eligible";

    }
    else{
        cout << "Attendance percentage: "<<cpercentage<<endl;
        cout <<"Status: Not Eligible";
        
    }
}

int main(){
    string name;
    
    cout <<"enter your name: ";
    cin>>name;
    cout <<endl;
    double conducted;
    cout <<"Enter the no of classes conducted: ";
    cin>>conducted;
    cout <<endl;
    double attended;
    cout <<"enter the total no of class attented: ";
    cin>>attended;
    cout <<endl;

    

    if(attended > conducted){
        cout << "Invalid inputs!!";
    }
    else{
        percentage(conducted,attended);
    }

    return 0;
}
