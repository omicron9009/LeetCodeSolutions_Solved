class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        for(int n = 0 ; n < nums1.size();n++){
            bool found=false;
            auto idx = find(nums2.begin(),nums2.end(),nums1[n]);
            int index=idx-nums2.begin();
            for(int i = index+1 ; i < nums2.size();i++){
                if(nums2[i]>nums1[n]){
                    nums1[n]=nums2[i];
                    found=true;
                    break;
                }
            }
            if(!found){
                nums1[n]=-1;
            }
        }
        return nums1;
    }
};