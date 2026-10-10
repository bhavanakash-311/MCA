#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int m = matrix.size();
         int n = matrix[0].size();
        vector<int> v;
        int left= 0,top=0;
        int right = n-1, bottom = m-1;

    while(left<=right && top<=bottom){

        for(int i = left;i<=right;i++){
            v.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top;i<=bottom;i++){
            v.push_back(matrix[i][right]);
        }
        right--;
        
        if(top<=bottom){
            for(int i = right;i>=left;i--){
                v.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(left<=right){
            for(int i = bottom;i>=top;i--){
                v.push_back(matrix[i][left]);
            }

            left++;
        }
        
    }
    
    return v;
    
    }

int main(){
    vector<vector<int>> v;
    v = {{1,2,3,4,5,6},
    {20,21,22,23,24,7},
    {19,32,33,34,25,8},
    {18,31,36,35,26,9},
    {17,30,29,28,27,10},
    {16,15,14,13,12,11}};
    vector<int> res = spiralOrder(v);
    for(auto it : res){
        cout << it <<" ";
    }
    
    return 0;
}