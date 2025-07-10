class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {

        vector<int> res;
        int first_idx=-1;
        int last_idx=-1;

        for(int i = 0 ; i < arr.size();i++)
            if(arr[i]==target){
                first_idx=i;
                last_idx=first_idx;
                break;
            }

        for(int i = first_idx ;i<arr.size();i++){
            if(arr[i]!=arr[first_idx])break;
            last_idx=i;
        }
        res.push_back(first_idx);
        res.push_back(last_idx);
        return res;

    }
};