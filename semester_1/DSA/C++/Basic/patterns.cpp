#include<bits\stdc++.h>
using namespace std;


void pattern1 (int n){
    for(int i =0;i<n;i++){  //rows
        for(int j=0;j<n;j++){
            cout << "* " ;

        }
        cout << endl;

    }

}
void pattern2 (int n){
    for(int i =0;i<n;i++){  //rows
        for(int j=0;j<=i;j++){
            cout << "* " ;

        }
        cout << endl;

    }

}


void pattern3(int n){
    for(int i =1;i<=n;i++){  //rows
        for(int j=1;j<=i;j++){
            cout << j ;

        }
        cout << endl;

    }

}

void pattern4(int n){
    for(int i =1;i<=n;i++){  //rows
        for(int j=1;j<=i;j++){
            cout << i ;

        }
        cout << endl;

    }

}
void pattern5(int n){
    for(int i =0;i<=n;i++){  //rows
        for(int j=n;j>=i;j--){
            cout << "* " ;

        }
        cout << endl;

    }

}
void pattern6(int n){
    for(int i =1;i<=n;i++){  //rows
        for(int j=1;j<=n-i+1;j++){
            cout << j ;

        }
        cout << endl;

    }

}
void pattern7(int n){
    for(int i =1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<= 2*i-1;j++ ){
            cout << "*";
        }
          for(int l=1;l<=n-i;l++){
            cout << " ";
        }
        cout << endl;
    }

}

void pattern8(int n){


    for(int i=n;i>=1;i--){
         //space
    for(int j=0;j<=n-i;j++){
        cout << " ";
    }
    for (int k=2*i-1;k>=1;k--){
        cout << "*";
    }
    for(int l=0;l<=n-i; l++){
        cout << " ";
    }
     cout <<endl;
    }  

}

//symmetrical pattrn
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int star = i;
        if(i>n) star = 2*n-i;
        for (int j=1;j<=star;j++){
            cout << "*"; 
        }    
    cout << endl;
    }
 }

void pattern11(int n){
    for(int i= 1;i<=n;i++){
        
    }
}
   
int main(){
    int n;
    cin >> n;
    pattern10(n);
    return 0;

}


