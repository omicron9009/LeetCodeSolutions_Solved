class Solution {
public:

    int get_mod(int n){
        if(n<0) return -n;
        else return n; 
    }

    int maxAdjacentDistance(vector<int>& arr) {
        int diff=0;
        for(int i =0 ; i < arr.size()-1 ;i++){
            int d = get_mod(arr[i]-arr[i+1]);
            diff=max(diff,d);
        }
        return max(diff,get_mod(arr[0]-arr[arr.size()-1]));
        
    }
};