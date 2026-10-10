#inlcude <bits/stdc++.h>
using namespace std;

class Vehicle(){
	public:
	int registerno;
	string vehicletype;
	int slotno ;
	int duration;
	int slot =50;
	
	void park(){
		if(slot>=50){
			cout << "No parking space available";
		}
		slot--;
	}
	void remove_vehicle(){
		slot++;
	}
	void display_slots(){
		cout << slot;
	}
	
	int totalcharges(int duration,string type){
		int charges = 0;
		if(type == car){
		   if(duration<=2){
		   	charges = duration*40;
		   }else(){
		   	charges = 2*40 + (duration-2)*20;
		   }
		}
		else{
		   if(duration<=2){
		   	charges = duration*20;
		   }else(){
		   	charges = 2*20 + (duration-2)*10;
		   }
		}
		
		
	}
	void parking_summary(){
		cout << "Enter the registration number: ";
		cin >> registerno;
		cout << "Enter your Vehicle type";
		cin>> vehicletype;
		cout << "Enter the duration of parking: ";
		cin>> duration;
		
	}
	
}

int main(){
	return 0;
}
