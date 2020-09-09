class Solution {
public:
    int myAtoi(string str) {
        int digit = 0;
        bool negative = false;
        if(isalpha(str[0]) != 0){
            return 0;
        }
        for(int i = 0;i< str.size();i++){
            if(isalpha(str[i]) != 0){
                return digit;
                break;
            }
            if(isdigit(str[i]) != 0){
                if(i != 0 && str[i-1] == '-'){
                    negative = true;
                }
                digit = digit*10+ (int)(str[i]);
                
                if(digit > 2147483648 && negative == true){
                    return -2147483648;
                }
                
                // if(digit >)
            }
        }
        return digit;
    }
};