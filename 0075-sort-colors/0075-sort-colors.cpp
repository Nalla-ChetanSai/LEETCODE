class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int cur = 0;
        int r = nums.size()-1;
        while(cur<=r){
            if(nums[cur]==0){
                swap(nums[l],nums[cur]);
                l++;
                cur++;
            }else if(nums[cur]==2){
                swap(nums[cur],nums[r]);
                r--;
            }else{
                cur++;
            }
        }
    }
};