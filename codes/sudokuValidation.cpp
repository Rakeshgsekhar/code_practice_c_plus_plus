#include <iostream>
#include<vector> 
#include<set>
#include <regex> 
#include <algorithm>
#include<string>
#include <cstring>
#include <numeric>

using namespace std;

bool sudoku2(std::vector<std::vector<char>> grid) {
    int rows = grid.size();
    int cols = grid.size();
    for(int i =0;i<9;i++){
        set <char> s1,s2;
        for(int j =0 ; j<9;j++){
            if (grid[i][j] != '.'){
                 cout<<"row "<<(grid[i][j])<<endl;
                if(s1.insert(grid[i][j]).second == false){
                    cout<<"failed-row "<<grid[i][j]<<endl;
                    return 0;
                }
            }
            if(grid[j][i] != '.'){
                cout<<"col "<<grid[i][j] << endl;
                if(s2.insert(grid[j][i]).second == false){
                    cout<<"failed-col "<<grid[i][j]<< endl;
                    return 0;
                }
            }
        }
    }

    for(int row = 0 ;row<9;row = row +3){
        for (int col = 0;col<9;col = col + 3){
            set<char> s4;
            for(int r = row;r<row+3;r++){
                for(int c = col;c <col+3;c++){
                    if (grid[r][c] != '.'){
                        if(s4.insert(grid[r][c]).second == false){
                            return false;
                        }
                    }
                }
            }
        }
    }


    cout<<"true";
    return 1;
}


int main(){


    vector<vector<char>> sudoku {
        vector<char>{'.', '.', '.', '1', '4', '.', '.', '2', '.'},
        vector<char>{'.', '.', '6', '.', '.', '.', '.', '.', '.'},
        vector<char>{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        vector<char>{'.', '.', '1', '.', '.', '.', '.', '.', '.'},
        vector<char>{'.', '6', '7', '.', '.', '.', '.', '.', '9'},
        vector<char>{'.', '.', '.', '.', '.', '.', '8', '1', '.'},
        vector<char>{'.', '3', '.', '.', '.', '.', '.', '.', '6'},
        vector<char>{'.', '.', '.', '.', '.', '7', '.', '.', '.'},
        vector<char>{'.', '.', '.', '5', '.', '.', '.', '7', '.'}};

vector<vector<char>> sudoku12 {
vector<char>{'.','4','.','.','.','.','.','.','.'}, 
vector<char>{'.','.','4','.','.','.','.','.','.'}, 
vector<char>{'.','.','.','1','.','.','7','.','.'}, 
vector<char>{'.','.','.','.','.','.','.','.','.'}, 
vector<char>{'.','.','.','3','.','.','.','6','.'}, 
vector<char>{'.','.','.','.','.','6','.','9','.'}, 
vector<char>{'.','.','.','.','1','.','.','.','.'}, 
vector<char>{'.','.','.','.','.','.','2','.','.'}, 
vector<char>{'.','.','.','8','.','.','.','.','.'}};


    bool val = sudoku2(sudoku12);
    cout<<sudoku2(sudoku) ;
    cout<<sudoku2(sudoku12) ;
}