class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char, int> map;
        // int n = s.length(), m = t.length();
        // if (n != m) {
        //     return false;
        // }
        // for (int i = 0; i < n; i++) {
        //     map[s[i]]++;
        // }

        // for (int i = 0; i < m; i++) {
        //     if(map.find(t[i])==map.end() || map[t[i]]==0){
        //         return false;
        //     }
        //     else{
        //         map[t[i]]--;
        //     }
        // }
        // return true;


        unordered_map<char , int> map; 
        if(s.length()!=t.length())return false;
        for(char c : s){
            map[c]++;
        }
        for(char c : t){
            if(map.find(c)==map.end() || map[c]==0){
                return false;
            }
            else{
                map[c]--;
            }
        }
        return true ;
    }
};