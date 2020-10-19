#include <iostream>
#include<vector> 


using namespace std;

vector<int>queueOrder(int n,int m){
    vector<int>queue;
    vector<int>amount;
    vector<int>result;
    int amt,currentQ;
    for(int i = 0;i<n;i++){
        cin>>amt;
        // cout<<amt;
        amount.push_back(amt);
    }
    for(int i = 0;i<n;i++){
        queue.push_back(i+1);
    }
    while(queue.size()!=0){
        currentQ = 0;
        if(amount[currentQ]<=m){
            // cout<<amount[currentQ]<<endl;
            amount.erase(amount.begin());
            result.push_back(queue[currentQ]);
            queue.erase(queue.begin());
        }else{
            int newAmt = amount[currentQ]-m;
            
            amount.erase(amount.begin());
            amount.push_back(newAmt);
            int user = queue[currentQ];
            // cout<<amount[currentQ]<<user<<endl;
            queue.erase(queue.begin());
            queue.push_back(user);
        }
    }
    return result;
}
int main(){
    int t, n, m;
      cin >> t; // read t. cin knows that t is an int, so it reads it as such.
      for (int i = 1; i <= t; ++i) {
        cin >> n >> m; // read n and then m.
        vector<int> result = queueOrder(n,m);
        cout << "Case #" << i << ": ";
        for(int i =0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
        // cout knows that n + m and n * m are ints, and prints them accordingly.
        // It also knows "Case #", ": ", and " " are strings and that endl ends the line.
        

      }
      return 0;
}