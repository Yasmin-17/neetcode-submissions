class Solution {
   public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans=0;
        while (low <= high) {
            long long mid = (low + (high-low) / 2);
            if (1LL * mid * mid == x) {
                return mid;
            } else if (1LL * mid * mid > x) {
                high = mid - 1;
            } else {
                // This could be a possible ans because we have found a value which is smaller than or equal to sqrt of x
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};