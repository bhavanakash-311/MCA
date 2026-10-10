#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();

    // Transpose
    int temp = 0;
    for(int i =0 ; i<m; i++){
        for(int j =0; j<n; j++){
            if(i<j){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix [j][i] = temp;

            }
            else{
                continue;
            }
        }
    }

    //reverse
    
    for(int i =0; i<m; i++){
        for(int j =0; j<n/2; j++){
            swap(matrix[i][j], matrix[i][n-1-j]);
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
            cout <<setw(2)<<ele <<" ";
        }
        cout <<endl;
    }
    return 0;
}