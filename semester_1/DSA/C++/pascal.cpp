#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> vec;
    int sum;
    for(int i=0;i<numRows;i++){
        vector<int> row;
        for(int j=0; j<=i; j++){
            sum = 0; 
            if(j==0 || j==i){
                row.push_back(1);
            }
            else{
                sum = vec[i-1][j-1] + vec[i-1][j];
                row.push_back(sum);
            }
        }
        vec.push_back(row);
    }
    return vec;
}

int main(){
    vector<vector<int>> res;
    res = generate(5);
    for(auto row : res){
        for(auto ele : row){
            cout << ele <<" ";
        }
        cout << endl;  
    }


    return 0;
}