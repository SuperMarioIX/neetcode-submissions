class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        // for(int i=0; i<nums.size(); i+=k){
        //     vector<int> temp;
        //     for(int j=i; j< i+k && j<nums.size(); j++){
        //         temp.push_back(nums[j]);
        //     }
        //     int z=temp[0];
        //     int maxim = INT_MIN;
        //     for(int x=1; x<temp.size(); x++){
        //         if(z+1==temp[x]){
        //             maxim=max(maxim, temp[x]);
        //         }
        //         z=temp[x];
        //     }
        //     temp.erase(temp.begin(), temp.end());
        //     res.push_back(maxim);
        // }
        for(int i=0;i+k<=nums.size(); i++){
            bool suca = true;
            for(int j=i+1; j<i+k; j++){
                if(nums[j]!=nums[j-1]+1){
                    suca = false;
                    break;
                }
            }
            if(suca)res.push_back(nums[i+k-1]);
            else res.push_back(-1);
        }



        return res;
    }
};
