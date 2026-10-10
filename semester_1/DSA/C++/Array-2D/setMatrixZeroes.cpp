#include <iostream>
#include <vector>
using namespace std;

void markrow(vector<vector<int>>& matrix,int i,int n){
    for (int k=0 ; k< n ; k++){
        if(matrix[i][k] != 0){
            matrix[i][k] = -1;
        }
    }
}

void markcol(vector<vector<int>>& matrix,int j,int m){
    for (int k=0 ; k<m ; k++){
        if(matrix[k][j] != 0){
            matrix[k][j] = -1;
        }
    }
}
void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j]==0){
                    markrow(matrix,i,n);
                    markcol(matrix,j,m);
                }
            }
        }

        for(int i = 0; i < m; i++){
            for (int j = 0;j < n; j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
        
        
}

int main(){
    vector<vector<int>> matrix;
    matrix ={{1,1,1},
            {1,0,1},
            {1,1,1}
            };
    setZeroes(matrix);
    for(auto row : matrix){
        for (auto ele : row){
            cout <<ele <<" ";
        }
        cout <<endl;
    }

    return 0;
}