class Solution {
public:
    string longestPalindrome(string s) {
        
        int startIndex = 0,endIndex = 0;
        if(s.size() == 0){
            return "";
        }else{
            for(int i = 0 ; i < s.size(); i++){
                int length1 = StrLength(i,i,s);
                int length2 = StrLength(i,i+1,s);
                
                if(length1 > endIndex-startIndex){
                    startIndex = i-length1/2;
                    endIndex = i+length1/2;
                }
                
                if(length2 > endIndex-startIndex){
                    startIndex = i+1-length2/2;
                    endIndex = i+length2/2;
                }
                
            }
            
            return s.substr(startIndex,endIndex-startIndex+1);
        }
    }
    
    int StrLength(int left, int right, string str){
        
        int length;
        while(left>=0 && right < str.size()){
            if(str[left]== str[right]){
                length = right-left+1;
                left--;
                right++;
            }else break;
        }
        
        return length;
    }
};