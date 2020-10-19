#include <iostream>
#include<vector> 


using namespace std;

class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int maxVal = 0,maxIter = 0,currentCus = 0;
        int count = 0;
        int tempProfit=0;
        while(customers.size() != 0){
            count++;
            if(customers[0] <= 4){
                int numCus = customers[0];
                cout<<numCus<<endl;
                currentCus += numCus;
                tempProfit = (currentCus*boardingCost)-(count*runningCost);
                customers.erase(customers.begin());
                
            }else{
                int remainig = customers[0] - 4;
                cout<<"remainig : "<<remainig<<endl;
                currentCus += 4;
                tempProfit = (currentCus*boardingCost)-(count*runningCost);
                customers.push_back(remainig);
                customers.erase(customers.begin());
                
            }
            if(tempProfit>maxVal){
                    cout<<count<<tempProfit<<endl;
                    maxVal = tempProfit;
                    maxIter = count;
            }
        }
        cout<<"result: "<<maxIter<<endl;
        return maxIter;
    }
};

int main(){
    vector<int>noOfCus {10,10,6,4,7};
    Solution S;
    S.minOperationsMaxProfit(noOfCus,3,8); 
}