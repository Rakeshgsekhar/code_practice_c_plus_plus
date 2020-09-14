#include <iostream>
#include<vector> 
#include<set>
#include <regex> 
#include <algorithm>
#include<string>
#include <cstring>
#include <numeric>

using namespace std;

std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
    int rows = a.size(); 
    int cols =a[0].size(); 
    for(int layer = 0;layer<rows/2;layer++){
            
        int first = layer;
        int last = rows-1-layer;
        for(int i = first;i<last;i++){
            int offset = i-first;
            int top = a[first][i];
                

            a[first][i] = a[last-offset][first];
            a[last-offset][first] = a[last][last-offset];
            a[last][last-offset] = a[i][last];
            a[i][last] = top;

        }
    }
    return a;
}

int main(){
    vector<vector<int>> matrix;
    // matrix.push_back(vector<int>(7,4,1));
    vector<int>row1 {7,4,1};
    vector<int>row2 {8,5,2};
    vector<int>row3 {9,6,3};
    matrix.push_back(row1);
    matrix.push_back(row2);
    matrix.push_back(row3);

    for(int i =0 ; i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<""<<endl;
    }
    matrix = rotateImage(matrix);
    for(int i =0 ; i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<""<<endl;
    }
}