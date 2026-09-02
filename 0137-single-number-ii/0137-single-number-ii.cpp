class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = 2;
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                left = right+1;
                right = left+2;
            }else{
                return nums[left];
            }
        }
        return nums[left];
    }
};