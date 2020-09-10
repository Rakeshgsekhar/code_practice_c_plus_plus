#include <iostream>
#include<vector> 
#include<set>
#include <regex> 
#include <algorithm>
#include<string>
#include <cstring>
#include <numeric>

using namespace std;

class Solution{
    public:
    int compareVersion(string version1, string version2) {
        int version1Sum = 0 ,version2Sum = 0;
        int v1Length = version1.length();
        int v2Length = version2.length();
        for (int  i = 0, j =0;i<v1Length || j<v2Length;){
            while(i<v1Length && version1[i] != '.'){
                version1Sum = version1Sum*10 + (version1[i]-'0');
                i++;
            }
            while(j<v2Length && version2[j] != '.'){
                version2Sum = version2Sum*10 + (version2[j]-'0');
                j++;
            }

            if(version1Sum  > version2Sum){
                return 1;
            } 
            if(version1Sum < version2Sum){
                return -1;
            }
            version1Sum = 0 ;
            version2Sum = 0;
            i++;
            j++;
        }
        return 0;
    }
};

int main(){
    Solution s;
    cout <<s.compareVersion("1.01","1.001")<<endl;
    cout <<s.compareVersion("7.5.2.4","7.5.3")<<endl;
    cout <<s.compareVersion("0.1","1.1")<<endl;
    cout <<s.compareVersion("1","1.1")<<endl;
    cout<<s.compareVersion("1.0.1","1")<<endl;
}