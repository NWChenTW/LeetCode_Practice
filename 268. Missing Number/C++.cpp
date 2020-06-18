class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=nums.size();
        int i=0;

        for (int num: nums){
            result ^= nums[i];
            result ^= i;
            i++;
        }
        return result;
    }
};