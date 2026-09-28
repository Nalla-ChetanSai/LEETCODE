class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0 , left = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            if(nums[right]==0){
                k--;
            }
            while(k<0){
                if(nums[left]==0)k++;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};