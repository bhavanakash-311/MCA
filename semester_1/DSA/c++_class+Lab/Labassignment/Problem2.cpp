#include <bits/stdc++.h>
using namespace std;




int main(){
	string name;
	cout << "Enter your name: " ;
	cin >> name;
	int age;
	cout << "Enter your age: ";
	cin>> age;
	float temp;
	cout<< "Enter your body temperature: ";
	cin>> temp;
	int heartrate;
	cout << "Enter your heart Rate: ";
	cin >> heartrate; 

	
	if(heartrate>=60 && heartrate<=100 && temp>=36 && temp<=37.5){
		cout << "NORMAL";
	}
	else if(temp> 37.5 && heartrate > 100){
		cout << "IMMEDIATE ATTENTION REQUIRED";
		
	}
	else if(temp<36 && heartrate< 60){
			cout << "IMMEDIATE ATTENTION REQUIRED";
	}
	return 0;
}

