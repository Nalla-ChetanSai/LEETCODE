class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0, dig_sum =0,total=0;
        for(auto i : nums){
            ele_sum = ele_sum+i;

            while(i>0){
                 dig_sum += i % 10;
                i /= 10;
            }
        }
        return abs(ele_sum - dig_sum);
    }
};