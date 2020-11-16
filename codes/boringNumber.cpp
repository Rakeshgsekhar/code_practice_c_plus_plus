#include <iostream>
#include<vector> 
#include <string> 


using namespace std;
bool evenStart(int num){
    int  k =0;
    while(num > 0){
        k = num;
        num = num/10;

    }
   if(k%2 == 0)return true;

    return false;
}

int boringCounte(int left,int right){
    int count = 0;
    bool flg = true;
    while(left <= right){
        if(!evenStart(left)){
            string val = to_string(left);
        for(int i = 0;i<val.size();i++){
            if((i)%2 != val[i]%2){
                flg = true;
            }else{
                flg = false;
                break;
            }
        }
        if(flg){
            count++;
        }
        }
        left++;
    }
    return count;
}

int main(){
    int t, l,r;
      cin >> t; // read t. cin knows that t is an int, so it reads it as such.
    //   cout<<evenStart(200);
    //   cout<<evenStart(100);
      for (int i = 1; i <= t; ++i) {
        cin >> l>>r; // read n and then m.
        int result = boringCounte(l,r);
        cout << "Case #" << i << ": "<<result;
        cout<<endl;
        // cout knows that n + m and n * m are ints, and prints them accordingly.
        // It also knows "Case #", ": ", and " " are strings and that endl ends the line.
      }
      return 0;
}