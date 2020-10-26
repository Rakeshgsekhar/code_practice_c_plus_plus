#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    // int k = 2;
    int maxSum = INT_MIN;
    int subMatrixRow = 0;
    int subMatrixCol = 0;
    while(subMatrixRow<4){
        cout<<endl;
            subMatrixCol = 0;
            while(subMatrixCol < 4){
                int tempSum = 0; 
                for(int k = subMatrixRow;k<=subMatrixRow+2;k++){
                    for(int m = subMatrixCol;m<=subMatrixCol+2;m++){
                        if(k == subMatrixRow+1){
                            if(k == subMatrixRow+1 && m == subMatrixCol+1){
                                cout<<"  "<<arr[k][m]<<" ";
                                tempSum += arr[k][m];
                            }
                        }else{
                            cout<<arr[k][m]<<" ";
                            tempSum += arr[k][m];
                        }  
                    }
                    cout<<endl;
                }
                cout<<endl;
                if(tempSum > maxSum){
                    maxSum =tempSum;
                }
                cout<<"SUM OF SUB-MATRIC : "<<tempSum<<endl<<endl;
                subMatrixCol++;
            }
            cout<<endl;
        subMatrixRow++;
    }
    return maxSum;
}

int main()
{   vector<vector<int>> matrixs 
    {
        {0,-4,-6,0,-7,-6},
        {-1,-2,-6,-8,-3,-1},
        {-8,-4,-2,-8,-8,-6},
        {-3,-1,-2,-5,-7,-4},
        {-3,-5,-3,-6,-6,-6},
        {-3,-6,0,-8,-6,-7}
    };
    for(int i = 0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<matrixs[i][j]<<" ";
        }
        cout<<endl;
    }
    int result = hourglassSum(matrixs);
    cout<<"result : "<<result;
    return 0;
}