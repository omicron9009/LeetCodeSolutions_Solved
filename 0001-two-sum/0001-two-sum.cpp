class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        // for (int i = 0; i < arr.size(); i++) {
        //     for (int j = i+1; j < arr.size(); j++) {
        //         if (arr[j] == target - arr[i]) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};

        // unordered_map<int, int> map;

        // for (int i = 0; i < arr.size(); i++) {
        //     map[arr[i]] = i;
        // }
        // for (int i = 0; i < arr.size(); i++) {
        //     int cmp = target - arr[i];

        //     if (map.find(cmp) != map.end() and map[cmp] != i) {
        //         return {i, map[cmp]};
        //     }
        // }
        // return {};

        unordered_map<int , int > map ;
        for(int i = 0 ; i < arr.size();i++){
            int cmp = target-arr[i];
            if(map.find(cmp)!=map.end()){
                return{map[cmp],i};
            }
            map[arr[i]]=i;
        }
        return {};
    }
};