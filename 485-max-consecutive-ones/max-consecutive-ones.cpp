class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak=0;
        int best=0;
        for(int num:nums){
            if(num == 1){
            streak++;
            best=max(best,streak);
        }
        else{
             streak=0;
        }
    }
    return best;
    }
    
};