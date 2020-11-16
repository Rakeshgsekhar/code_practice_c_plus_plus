#include <iostream>
#include<vector> 


using namespace std;

int restartTime(int N, int K, int S){
    int rTime = (K-1) + (N+1);
    return rTime;
}
int reverseTime(int N, int K, int S){
    int rvTime = (K-1)+(K-S)+(N-(S-1));
    return rvTime;
}

int minTimeToComplete(int N, int K, int S){
    int result = 0;
    int rtTime = restartTime(N,K,S), rvTime = reverseTime(N,K,S);
    return rtTime<rvTime ? rtTime:rvTime;
}

int main(){
    int t, n, k,s;
      cin >> t; // read t. cin knows that t is an int, so it reads it as such.
      for (int i = 1; i <= t; ++i) {
        cin >> n >>k >>s; // read n and then m.
        int64_t result = minTimeToComplete(n,k,s);
        cout << "Case #" << i << ": "<<result;
        cout<<endl;
        // cout knows that n + m and n * m are ints, and prints them accordingly.
        // It also knows "Case #", ": ", and " " are strings and that endl ends the line.
      }
      return 0;
}