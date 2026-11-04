class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> duplicates(nums.begin(), nums.end());

        if(duplicates.size() == nums.size())return false;

        return true;
    }
};