#include <bits/stdc++.h>
using namespace std;

class Student{
	public:
	string name;
	int rollno ;
	int subj01, subj02, subj03, subj04, subj05, subj06;
	
	public:
	void input(){
		cout<< "Enter your name: ";
		cin >>name;
		cout<< "Enter your rollno: ";
		cin>> rollno;
		cout<< "Enter subject marks: ";
		cin >> subj01>> subj02>>subj03>>subj04 >> subj05>>subj06 ;
		
	}
	void status(){
		if(subj01<40 || subj02<40 || subj03< 40 || subj04 <40 || subj05 <40 || subj06<40){
    	cout<< "FAILED" <<endl;
    }
    	else{
    		cout<< "PASSED" <<endl;
		}
	
	}
	
	int total(){
		int totalmarks = subj01+subj01+subj03+ subj04 +subj05 + subj06;
		return totalmarks;
	}
	
    int percentage(){
    	
    	int  percentage_ = ((total())/600)*100;
    	return percentage_;
	}
	void warningstatus(){
		if (percentage() < 50){
    		cout << "Academic Risk warning" <<endl;

		}
	}
	
	
	
	
	
	char grade(){
		if(percentage()<50){
			return 'F';
		}
		else if(percentage()>=50 && percentage()<=59){
			return 'D';
		}
		else if(percentage()>=60 && percentage()<=69){
			return 'C';
		}
		else if(percentage()>=70 && percentage()<= 79){
			return 'B';
		}
		else if(percentage()>=80 && percentage()<=89){
			return 'A';
		}
		else if(percentage()>=90 ){
			return 'A';
		}
	}
	
	
	
	
	
	
};



int main(){
    int studno ;
    cout << "Enter the no of student: ";
    cin>> studno ;
    vector<Student> student_details(studno);
    for(int i=0;i<studno;i++){
    	student_details[i].input();
	}
	
	
	return 0;
}
