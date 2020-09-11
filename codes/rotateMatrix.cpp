#include <iostream>
#include<vector> 
#include<set>
#include <regex> 
#include <algorithm>
#include<string>
#include <cstring>
#include <numeric>

using namespace std;

class Solution{
    public:
    bool rotate(int **matrix){
        int rows = sizeof(matrix)/sizeof(matrix[0]);
        int cols = sizeof(matrix[0])/sizeof(matrix[0][0]);
        if (rows != cols || rows == 0){
            return false;
        }
        for(int layer = 0;layer<rows/2;layer++){
            int first = layer;
            int last = rows-1-layer;
            for(int i = first;i<last;i++){
                int offset = i-first;
                int top = matrix[first][i];
                

                matrix[first][i] = matrix[last-offset][first];
                matrix[last-offset][first] = matrix[last][last-offset];
                matrix[last][last-offset] = matrix[i][last];
                matrix[i][last] = top;

            }
        }
        return true;
    }
};


int main(){
    int arr[5][5]={
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };

    Solution S;
    int **p = arr;
    cout<<S.rotate(p);
}