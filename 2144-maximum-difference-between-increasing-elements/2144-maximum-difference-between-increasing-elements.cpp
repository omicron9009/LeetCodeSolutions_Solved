class Solution {
public:
    int maximumDifference(vector<int>& arr) {

        int max_diff = -1;
        int min_value=arr[0];

        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > min_value){
                max_diff=max(max_diff,arr[i]-min_value);
            }
            else {
                min_value=arr[i];
            }
        }
        return max_diff;
    }
};