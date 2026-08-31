class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(auto i : hours){
            if(i>=target){
                count+=1;
            }
        }
        return count;
    }
};