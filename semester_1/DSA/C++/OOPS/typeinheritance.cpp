#include <bits/stdc++.h>
using namespace std;

class Person{
public:
    int age;
};

class Student: public Person{
public:
    string name;
    int rollno;
};

//multilevel- inheritance
class GradStudent:public Student{
    string researchArea;
};


class Teacher{
public:
    string subject;
    int salary;
};

//multiple-inheritance
class Ta:public Student,public Teacher{
public: 
    string researchArea;

};


int main(){
    Ta ta1;
    ta1.name = "Bhavana";
    cout<< ta1.name <<endl;
    GradStudent gs1;
    gs1.age = 20;
    cout << gs1.age;


    return 0;
}