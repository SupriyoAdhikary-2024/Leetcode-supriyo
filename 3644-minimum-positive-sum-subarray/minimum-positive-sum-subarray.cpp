class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
         int n = nums.size();
    int answer = INT_MAX;

    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += nums[end];
            int length = end - start + 1;

            if (length >= l && length <= r && sum > 0) {
                answer = min(answer, sum);
            }
        }
    }

    return answer == INT_MAX ? -1 : answer;
        
    }
};