class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0];
        int currentsum= nums[0];

        for(int i =1;i<nums.size();i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            best=max(best,currentsum);
        }
        return best;
    }
};