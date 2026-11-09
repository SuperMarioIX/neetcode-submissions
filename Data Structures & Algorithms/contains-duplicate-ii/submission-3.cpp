class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_set<int> window;
        int left = 0;

        for(int right=0; right<size; right++){
            if(right-left > k){
                window.erase(nums[left]);
                left++;
            }
            if (window.find(nums[right]) != window.end()) {
                return true;
            }
            window.insert(nums[right]);
        }
        return false;
    }
};