class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int r = 0 ; r < k ; r++){
            sum = sum + nums[r];
        }
        int maxsum = sum ;
        for(int i = k ; i < nums.size() ; i++){
            sum = sum - nums[i-k] + nums[i];
            maxsum = max(maxsum , sum);
        }
        return (double) maxsum / k;
    }
};