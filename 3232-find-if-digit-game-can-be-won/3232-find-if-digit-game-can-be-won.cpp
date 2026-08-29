class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1, sum2;
        for(auto i:nums){
            if(i<10){
                sum1=sum1+i;
            }
            else{
                sum2 = sum2+i;
            }
        }
        return sum1!=sum2;
    }
};