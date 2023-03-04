class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int pairs = 0;
        vector<int> out;

        for(int i = 0 ; i < nums.size()-1 ; i++ )
        {
            if (nums[i]==nums[i+1]) 
            {
                i++;
                pairs++;
            }
        }
        out.push_back(pairs );
        out.push_back(nums.size()-pairs*2  );

        return out;
    }
};