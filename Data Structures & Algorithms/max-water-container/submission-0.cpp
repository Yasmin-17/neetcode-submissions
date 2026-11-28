class Solution {
   public:
    int maxArea(vector<int>& heights) {
        // optimal solution is using 2 pointer approach

        int low = 0, high = heights.size() - 1;
        int maxArea = 0;
        while(low < high) {
            int width = (high-low);
            int height = min(heights[low], heights[high]);
            int area = width * height;
            if(maxArea < area) {
                maxArea = area;
            }
            if(heights[low] >= heights[high]) {
                high--;
            }
            else {
                low++;
            }
        }
        return maxArea;
    }
};
