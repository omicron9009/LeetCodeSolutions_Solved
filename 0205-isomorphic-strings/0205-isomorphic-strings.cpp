class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length()!=t.length())return false;
        unordered_map<char , char >map ; 
        unordered_set<char> t_s;
        for(int i = 0 ; i < s.length(); i++){
            if(map.find(s[i])!=map.end()){
                if(t[i]!=map[s[i]]) return false;
            }
            else{
                if(t_s.find(t[i])!=t_s.end()){
                    return false;
                }
                map[s[i]]=t[i];
                t_s.insert(t[i]);

            }
        }
      return true;
    }
};