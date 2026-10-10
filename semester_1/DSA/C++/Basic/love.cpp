#include <bits/stdc++.h>
using namespace std;

void Lpart(int n)
{
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
        if (j == n)
        {
            for (int j = 1; j <= n-1; j++)
            {
                cout << " *";
            }
        }
        cout << endl;
        j++;
    }
}

void Opart(int n){
    for (int i = 1; i <= n; i++){
        if (i == 1 || i == n){
            for (int j = 1; j <= n; j++){
                cout << "* ";
            }
        }
        else{
            for (int k = 1; k <= n; k++){
                if (k == 1 || k == n){
                    cout << "* ";
                    }
                
                else{
                    cout<< "  ";
                }
            }
        }
        cout<< endl;
    }
}

void Vpart(int n){
    for(int i=1;i<=n;i++){

        if(i>=1 && i<=n-2){
             for (int k = 1; k <= n; k++){
                if (k == 1 || k == n){
                    cout << "* ";
                    }
                
                else{
                    cout<< "  ";
                }
            }
        }else{
            if(i==n-1){
                for (int k = 1; k <= n; k++){
                if (k == 2 || k == n-1){
                    cout << "* ";
                    }
                
                else{
                    cout<< "  ";
                }
            }

            }else{
                for (int k = 1; k <= n; k++){
                if (floor(n/2)==k){
                    cout << "  *";
                    }
                
                else{
                    cout<< "  ";
                }
            }
                
            }
        }
            cout<< endl;
    }

}


void Epart(int n){
    for(int i=1;i<=n;i++){
        if(i==1 || i == (ceil(n/2))+1 || i== (n)){
            for(int k=1; k<=n;k++){
                cout<<"* ";

            }
        }else{
            for(int k=1; k<=n;k++){
                if(k==1){
                    cout<<"* ";
                }else{
                    cout<< " ";
                }
            }

        }
        cout<<endl;
    }

}



int main()
{
    int n;
    cin >> n;

    Lpart(n);
    cout<<endl;
    Opart(n);
    cout<<endl;
    Vpart(n);
    cout<<endl;
    Epart(n);
}
