class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> output;
        for(int i=0 ; i < nums.size() ; i++)
        {
            for(int j = nums.size()-1 ; j > i ; j--)
            {
                if(nums[i]+nums[j] == target)
                {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};
