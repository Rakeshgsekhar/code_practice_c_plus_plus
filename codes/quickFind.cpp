#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>

using namespace std;

class QuickFind
{
 
    public:
    vector<int> components;

   
    QuickFind(int n){
        ///components = new int[n];
        for(int i = 0; i < n; i++){
            components[i] = i;
        }
    }

    bool isConnected(int p, int q){
        return (components[p] == components[q]);
    }

    void Union(int p,int q){
        int temp = components[p];
        for(int i = 0;i<components.size();i++){
            if(components[i] == temp){
                components[i]=components[q];
            }
        }
    }


    void display(){

        for(int i = 0;i<components.size();i++){
             cout<<i;
        }
        for(int i = 0;i<components.size();i++){
             cout<<components[i];
        }
    }
};

int main(){

  //  QuickFind QF(10);
    int option;
    int p,q;

    do{
        cout<<"1. Add"<<endl;
        cout<<"2. check"<<endl;
        cout<<"3. Exit"<<endl;

        cin>>option;
        switch(option){
            case 1 : cout<<"Enter numbers to join"<<endl;
            cin>>p>>q;
           // QF.Union(p,q);
          //  QF.display();
            break;
            case 2 : cout<<"check"<<endl;
            break;
            case 3 : cout<<"Exit"<<endl;
            break;
            default:
            cout<<"try diff option";
            break;
        }
       
    }while(option != 3);
    
   // getch();
    return 0;
}