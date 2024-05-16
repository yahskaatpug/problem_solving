
/* Given an m x n matrix, return all elements of the matrix in spiral order.
 Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 Output: [1,2,3,6,9,8,7,4,5]*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>mat {{1,2,3},{4,5,6},{7,8,9}};
    spiralOrder(mat);
}

vector<int> spiralOrder(vector<vector<int>>& mat) {
        int rowStart = 0;
        int rowEnd = mat.size();
        int colStart = 0;
        int colEnd = mat[0].size();

        vector<int>res;

        while(rowStart < rowEnd && colStart < colEnd){
            for(int i = colStart;i < colEnd; i++){
                res.push_back(mat[rowStart][i]);
            }
            rowStart++;

            
            for(int i = rowStart;i < rowEnd; i++){
                res.push_back(mat[i][colEnd-1]);
            }
            colEnd--;
            
            
            if(rowStart<rowEnd){
                for(int i = colEnd-1;i >=colStart; i--){
                res.push_back(mat[rowEnd-1][i]);
            }
            rowEnd--;
            }
            

            if(colStart<colEnd){
                for(int i = rowEnd-1;i >=rowStart; i--){
                res.push_back(mat[i][colStart]);
            }
            colStart++;
            }

        }

        return res;
    }