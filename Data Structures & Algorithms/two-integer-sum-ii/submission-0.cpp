class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first_element = 0;
        int last_element = numbers.size()-1;

        while(first_element < last_element){
            if((numbers[first_element]+numbers[last_element])==target)
            return {first_element+1, last_element+1};

            if((numbers[first_element]+numbers[last_element])<target)
            first_element++;
            else
            last_element--;
        }

        return {-1, -1};
    }
};
