#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row = {m,-1};
    vector<int> col = {n,-1};

    for(int i = 0;i < m; i++){
        for (int j = 0;j < n; j++){
            if(matrix[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i =0 ;i < m; i++){
        for (int j = 0;j < n; j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
}
int main(){
    vector<vector<int>> matrix;
    matrix ={{1,1,1,1},
            {1,0,1,1},
            {1,1,0,1},
            {1,0,0,1}
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