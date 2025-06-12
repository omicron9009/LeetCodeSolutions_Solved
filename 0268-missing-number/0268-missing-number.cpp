class Solution {
public:
    int missingNumber(vector<int>& arr) {

        // sort(arr.begin(),arr.end());

        // for(int i = 0 ;i<arr.size();i++){
        //     if(arr[i]!=i)return i;
        // }
        // return arr.size();

        int sum_upto = (arr.size())*(arr.size()+1)/2;
        int sum=0;
        for(int i=0 ; i < arr.size() ; i++){
            sum+=arr[i];
        }
        return sum_upto-sum;
        
    }
};