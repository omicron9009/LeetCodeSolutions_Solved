class Solution {
public:
    int rob(vector<int>& arr) {
        
    int prev2 = 0 ; 
    int prev1 = 0 ; 
    for(int n : arr){
        int curr= max(n + prev2 , prev1);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;

    }
};