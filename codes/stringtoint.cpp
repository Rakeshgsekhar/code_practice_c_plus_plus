#include<iostream>
#include<string.h>
#include<sstream>
#include<bits/stdc++.h> 

using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        if (str.empty())return 0;
		while (str.at(0) == ' ') {
			str.erase(str.begin());
			if (str.empty())return 0;
		}
		stringstream ss(str);
		int a;
		if (ss.fail())return 0;	
		ss >> a;
		if (a > INT_MAX)return INT_MAX;
		else if (a < INT_MIN)return INT_MIN;
		else if (a)return a;
		else return 0;
    }
};

int main(){
    Solution s;
    cout<<s.myAtoi("-42")<<"\n";
    cout<<s.myAtoi("42")<<"\n";
    cout<<s.myAtoi("  -42")<<"\n";
    cout<<s.myAtoi("+-42")<<"\n";
    cout<<s.myAtoi("4290 Word of wrath")<<"\n";
    cout<<s.myAtoi("wrath -42")<<"\n";
    cout<<s.myAtoi("-9876543211")<<"\n";

}