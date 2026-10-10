#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();


    int arr[m][n] ;
    for(int i =0 ; i<m; i++){
        for(int j =0; j<n; j++){
            arr[i][j] = matrix[n-j-1][i];
        }
    }
    for(int i =0 ; i<m; i++){
        for(int j =0; j<n; j++){
            matrix[i][j] = arr[i][j];
        }
    }
    }

int main(){
    vector<vector<int>> matrix;
    matrix ={{1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
            };

    rotate(matrix);
    for(auto row : matrix){
        for(auto ele : row){
            cout <<ele <<" ";
        }
        cout <<endl;
    }
    return 0;
}