class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int p : piles) {
            high = max(high, p);
        }
        while (low < high) {
            int mid = low + (high - low) / 2;
            int hours = 0;

            for (int p : piles) {
                hours += (p + mid - 1) / mid;
            }

            if (hours > h) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};
