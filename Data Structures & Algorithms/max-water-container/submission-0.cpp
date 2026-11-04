class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = INT_MIN;
        int start = 0;
        int size = heights.size()-1;

        while(start<size){
            int local_result = min(heights[start],heights[size])*(size-start);
            result = max(result, local_result);

            if(heights[start]<heights[size])start++;
            else size--;
        }

        return result;
    }
};
