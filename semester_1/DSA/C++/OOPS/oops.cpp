 #include <bits/stdc++.h>
 using namespace std;

class Teacher{
    //properties / attributes

private:
    double salary;  
  
public:
    string name;
    string dept;
    string subject;

    //constructor -> always public
    //non-parameterized
    // Teacher(){
    //     dept = "cse";
    // }

    //parameterized
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orobj){  //pass by reference- > pointing to the original object
        //Reference prevents copying the source object; the copy 
        //constructor still creates a completely new destination object.

        //It means we don't create a second Teacher object just to receive
        // the original object as an argument.
        this->name = orobj.name;
        this->dept = orobj.dept;
        this-> subject = orobj.subject;

    }

    
    //methods /member functions

    void getInfo(){
        cout << "Name: " <<name <<endl;
        cout << "Department: "<< dept << endl;
    }
    void changeDept(string newDept){
        dept = newDept;
    }

    //to get the indirect access of the private property of the class

    //setter 
    void setSalary(double s){
        salary = s;
    }

    //getter 
    double getSalary(){
        return salary;
    }
 };

 class Account{

    //data hiding achieved through private access modifier
private:
    double balance;
    string password;
public:    
    string accountid;
    string username;
 };

 int main(){
    
    // Teacher t1; //calling constractor(non parameterized)
    Teacher t1("Bhavana","cse","comp science",63827);
    Teacher t2(t1); 
    t1.getInfo();
    t2.getInfo();
    return 0;
 }