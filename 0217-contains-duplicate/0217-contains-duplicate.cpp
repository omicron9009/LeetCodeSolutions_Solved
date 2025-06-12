class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_map<int , int> map ; 
        for(int n: arr){
            map[n]++;
        }
        for(auto &kv : map){
            if(kv.second >1) return true;
        }
        return false;
    }
};