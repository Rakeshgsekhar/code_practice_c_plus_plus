#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;


// void display(int matrix[][]){
//      for(int i = 0; i<m;i++){
//         for(int j =0 ; j < n ;j++){
//            cout<<matrix[i][j]<<"\t";
//         }
//         cout<<""<<endl;
//     }
// }
int main(){
    int m = 0,n = 0;
    cout<<"Enter rows and colums : ";
    cin>>m>>n;
    int matrix[m][n];
    bool row[m]  ,col[n] ;
    for(int i = 0; i<m;i++){
        for(int j =0 ; j < n ;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;


     for(int i = 0; i<m;i++){
        for(int j =0 ; j < n ;j++){
            if(matrix[i][j] == 0){
                row[i] = true;
                col[j] = true;
            }
        }
    }
    for(int i = 0; i<m;i++){
        for(int j =0 ; j < n ;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<""<<endl;
    }

    for(int x=0;x<m;x++){
        if(row[x] == true){
            for(int i =0;i<n;i++){
                // cout<<matrix[x][i];
                matrix[x][i] = 0;
            }
        }
    }

    for(int x=0;x<n;x++){
        if(col[x] == true){
            for(int i =0;i<m;i++){
                // cout<<matrix[i][x];
                matrix[i][x] = 0;
            }
        }
    }

    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;

    for(int i = 0; i<m;i++){
        for(int j =0 ; j < n ;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<""<<endl;
    }
}