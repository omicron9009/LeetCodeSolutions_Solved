class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // for(int n = 0 ; n < nums1.size();n++){
        //     bool found=false;
        //     auto idx = find(nums2.begin(),nums2.end(),nums1[n]);
        //     int index=idx-nums2.begin();
        //     for(int i = index+1 ; i < nums2.size();i++){
        //         if(nums2[i]>nums1[n]){
        //             nums1[n]=nums2[i];
        //             found=true;
        //             break;
        //         }
        //     }
        //     if(!found){
        //         nums1[n]=-1;
        //     }
        // }
        // return nums1;

        // using monotonic stack !
        unordered_map<int , int> map;
        stack<int> st;

        for(int i = nums2.size()-1;i>=0;--i){
            int num = nums2[i];
            while(!st.empty() && st.top() <= num){
                st.pop();
            }
            map[num]=st.empty()?-1: st.top();
            st.push(num);
        }
        vector<int> res ; 
        for(int num : nums1){
            res.push_back(map[num]);
        }
        return res;

    }
};