#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max = releaseTimes[0];
        char maxKey =keysPressed[0];
        for(int i = 1; i<keysPressed.length();i++){
            int currentDuration = releaseTimes[i] - releaseTimes[i-1];
            if(max<currentDuration){
                max = currentDuration;
                maxKey = keysPressed[i];
            }else if(max==currentDuration){
                char s = keysPressed[i];
                if(maxKey<s){
                    maxKey = keysPressed[i];
                }

            }
        }
        return maxKey;
    }
};

int main(){
    Solution s;
    vector<int>releaseTimes {12,23,36,46,62};
    string keyPressed = "spuda";
    char result = s.slowestKey(releaseTimes,keyPressed);
    cout<<result;
}