class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c : s){
            if(isalpha(c)||isdigit(c)){
            c=tolower(c);
            str+=c;
            }
        }
        cout<<str;
        int i = 0;
        while(i < str.length()){
            if(str[i]!=str[str.length()-i-1]){
                return false;
            }
            i++;
        }
        return true;
    }
};