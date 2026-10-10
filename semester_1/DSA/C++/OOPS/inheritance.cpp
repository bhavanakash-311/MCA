#include <iostream>
#include <string>
using namespace std;

//parent class, base class
class Person{
public:
    string name;
    int age;
    // // parent constructor -> child constructor
    // Person(){
    //     cout << "I am base class constructor!" <<endl;
    // }
    
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    
    ~Person(){
        cout << "parent destructor.." <<endl;
    }
};

//child class,drived class
class Student : public Person{
    //name age roll no
public:
    int rollno;

    Student(string name ,int age, int rollno) : Person( name , age){
        cout << "I am drived class constructor!" <<endl;
        this-> rollno = rollno;
    }

    //child destructor -> parent destructor
    ~Student(){
        cout << "Child destructor.." <<endl;
    }

    void getInfo(){
        cout << "name: " << name <<endl;
        cout << "Age: " << age <<endl;
        cout << "rollno: " << rollno <<endl;


    }

};


int main(){
    // Student s1;  //base constructor call -> derived class contructor call
    // s1.name = "Bhavana";
    // s1.age = 18;
    // s1.rollno = 2834;
    Student s1("Bhavana ", 39, 89);
    s1.getInfo();



    return 0;
}

