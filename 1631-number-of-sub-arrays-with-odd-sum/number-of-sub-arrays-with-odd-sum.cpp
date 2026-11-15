class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
          const int MOD = 1'000'000'007;
        int evenCount = 1;  // The running sum starts at 0, which is even
        int oddCount = 0;
        bool isOdd = false;
        long long answer = 0;

        for (int num : arr) {
            if (num % 2 != 0) {
                isOdd = !isOdd;  // Adding an odd number flips the parity
            }

            if (isOdd) {
                answer += evenCount;
                oddCount++;
            } else {
                answer += oddCount;
                evenCount++;
            }

            answer %= MOD;
        }

        return answer;
    
    }
};