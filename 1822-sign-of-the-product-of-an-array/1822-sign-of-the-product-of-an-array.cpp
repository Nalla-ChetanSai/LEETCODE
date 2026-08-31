class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long product = 1;
        for(auto i : nums){
            if(i == 0){ product = 0; break; }else if(i < 0){ product = product * -1; }
        }
        return signFunc(product);
    }
    int signFunc(int x){
            if(x==0){
                return 0;
            }else if(x>0){
                return 1;
            }else{
                return -1;
            }
        }
};