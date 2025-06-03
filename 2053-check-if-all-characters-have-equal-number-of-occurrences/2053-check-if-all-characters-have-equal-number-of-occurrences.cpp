class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> map;
        for(char c : s){
            map[c]++;
        }
        int c = map[s[0]];
        for(auto& kv : map){
            if(kv.second!=c)return false;
        }
        return true;
    }
};