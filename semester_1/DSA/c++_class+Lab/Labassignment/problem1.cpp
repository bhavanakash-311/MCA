#include <bits/stdc++.h>
using namespace std;

int elecharge(int unit){
	float charge =0;
	if(unit<100){
		charge = unit*2.0;
	}
	else if(unit<200){
		charge = (100)*2.0 + (unit-100)*3.5;
	}
	else if(unit<500){
		charge = 100*2.0 + 100*3.5 + (unit-200)*5.0;
	}
	else{
		charge = 100*2.0 + 100*3.5 + 300*5.0 + (unit-500)*7.5;
	}
	return charge;
	
}
int main(){
	int coustid;
	cout<< " Enter your customer id :";
	cin>> coustid;
	string name;
	cout<<  "enter your name :";
	cin>> name;
	float units;
	cout<<  "enter the electricity units used:  ";
	cin >> units;
	float charge = 50 + elecharge(units);
	cout << "Hello " << name << ", your customer id is "<< coustid<< endl;
	cout << "Your electricity Bill is: " << charge;
	
	
	
	return 0;
}
