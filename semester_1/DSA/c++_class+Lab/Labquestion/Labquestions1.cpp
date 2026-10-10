#include <iostream>
using namespace std;

int calculateCalorie(int walk,int cycling, int running,int swimming){
    int k=0;
    if(walk>0){
        k++;
    }
    if(cycling>0){
        k++;
    }
    if(running>0){
        k++;
    }
    if(swimming>0){
        k++;
    }
    
    
    int wcalorie=0,ccalrie=0,rcalorie=0,scalorie=0;
    wcalorie = 5*walk;
    ccalrie = 8*cycling;
    rcalorie = 10*running;
    scalorie = 12*swimming;

    int total = wcalorie+ccalrie+rcalorie+scalorie;
    cout << "calories: "<<wcalorie<<","<<ccalrie<<","<<rcalorie<<","<<scalorie<<endl;
    cout << "Total number of calorie burt is: "<<total <<"cal."<<endl;
    float average = total/k;
    cout << "Average : "<<average<<endl;
    return average;

}

string activityLevel(float average){
    
    if(average<=200){
        return "Low";
    }
    else if(average<=499){
        return "Moderate";
    
    }
    else if(average<=799){
        return "High";
    }
    else{
        return "Intense";
    }
}

int main(){
    string name;
    int sessionno;
    string type;
    int duration;
    int walk;
    int cycling;
    int running;
    int swimming;

    cout << "Enter the type of Exercise: ";
    cout << "Enter 1.walking "<<endl;
    cout <<"2.cycling"<<endl;
    cout <<"3.running"<<endl;
    cout <<"4.Swimming "<<endl;

    for(int i=1;i<=4;i++){
        int n;
        cin >>n;
        switch(n){
            case 1:
                cout <<"Enter the duration for walking: ";
                cin >> walk;
                break;
            case 2:
                cout <<"Enter the duration for cycling: ";
                cin >> cycling;
                break;
            case 3:
                cout <<"Enter the duration for Running: ";
                cin >> running;
                break;
            case 4:
                cout <<"Enter the duration for swimming: ";
                cin >> swimming;
                break;
            default:
                cout<<"Invalid Input";
        }
    }

    float average = calculateCalorie(walk,cycling,running,swimming);
    string Level = activityLevel(average);
    cout << "Activity: "<< Level;
    
    return 0;
}