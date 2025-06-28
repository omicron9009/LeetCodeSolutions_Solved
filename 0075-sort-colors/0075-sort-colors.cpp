class Solution {
public:
    void sortColors(vector<int>& arr) {
        vector<int> res(3,0);
        for(int n : arr){
            res[n]++;
        }
        cout<<res[0]<<res[1]<<res[2];
        vector<int> ans ;
        for(int i = 0 ; i < res[0];i++){
            arr[i]=0;
        }
        for(int i = res[0]; i < res[1]+res[0];i++){
            arr[i]=1;
        }
        for(int i = res[0]+res[1] ; i < res[2]+res[0]+res[1] ;i++){
            arr[i]=2;
        }
    }
};