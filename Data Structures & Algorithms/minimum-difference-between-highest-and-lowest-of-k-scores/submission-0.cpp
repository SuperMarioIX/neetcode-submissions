class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int minim=INT_MAX, left = 0, size = nums.size();

        for(int right = k-1; right < size; right++){
            int res = nums[right]-nums[left];
            left++;
            minim = min(minim, res);
        }

        return minim;
    }
};