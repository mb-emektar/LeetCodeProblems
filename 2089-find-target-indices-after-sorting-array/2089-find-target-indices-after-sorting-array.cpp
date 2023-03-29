class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> out;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==target)
            {
                out.push_back(i);
                if( ((i+1)<nums.size()) && (nums[i+1]!=target) )return out;
            }
        }
        return out;
    }
};