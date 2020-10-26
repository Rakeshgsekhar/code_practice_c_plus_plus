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
    int j = 0,i = 0;
    int subMatrix = 0;
    int looping = 0;
    while(subMatrix<4){
        cout<<endl;
            looping = 0;
            while(looping < 4){
                int tempSum = 0; 
                for(int k = subMatrix;k<=subMatrix+2;k++){
                    for(int m = looping;m<=looping+2;m++){
                            if(k == subMatrix+1){
                                if(k == subMatrix+1 && m == looping+1){
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
                cout<<"temp sum"<<tempSum<<endl;
                looping++;
            }
            cout<<endl;

        subMatrix++;
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