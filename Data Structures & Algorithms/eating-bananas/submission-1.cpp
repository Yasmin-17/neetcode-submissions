class Solution {
   public:
    long long maxElement(vector<int>& arr) {
        long long largest = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
    long long timeTaken(vector<int>& arr, int h) {
        long long totalTime = 0;
        for (int i = 0; i < arr.size(); i++) {
            totalTime += ceil(double(arr[i]) / double(h));
        }
        return totalTime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int answer = 1;
        int low = 1;
        long long high = maxElement(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalTimetakentoeatKbananas = timeTaken(piles, mid);
            if (totalTimetakentoeatKbananas <= h) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return answer;
    }
};
