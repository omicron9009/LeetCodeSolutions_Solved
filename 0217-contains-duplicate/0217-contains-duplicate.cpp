class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        // unordered_map<int , int> map ; 
        // for(int n: arr){
        //     map[n]++;
        // }
        // for(auto &kv : map){
        //     if(kv.second >1) return true;
        // }
        // return false;


        // unordered_set<int> st;
        // for(int n : arr){
        //     if(st.find(n)!=st.end()){
        //         return true;
        //     }
        //     st.insert(n);
        // }
        // return false;

        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < arr.size()-1 ; i++){
            if(arr[i]==arr[i+1]) return true;
        }
        return false;


    }
};