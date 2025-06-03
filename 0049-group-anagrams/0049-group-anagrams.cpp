class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;

        unordered_map<string,vector<string>> map ;
        for(int i = 0 ; i < strs.size() ; i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            map[key].push_back(strs[i]);
        }

        for(auto &s : map){
            res.push_back(s.second);
        }
        return res;

    }
};