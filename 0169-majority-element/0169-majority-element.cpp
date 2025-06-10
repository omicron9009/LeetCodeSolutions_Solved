class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int med = int(nums.size()/2);
    unordered_map<int , int> map ; 
    for(int n : nums){
        map[n]++;
    }
    for(auto &kv : map){
        if(kv.second>med)return kv.first;
    }
    return -1;

    }
};