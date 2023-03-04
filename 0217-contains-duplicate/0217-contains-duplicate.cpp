class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> m_mapNums;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(m_mapNums.find(nums[i]) == m_mapNums.end() )
            {
                m_mapNums[nums[i]] = true;
                cout << "nums[i]: "<<nums[i] <<" m_mapNums[nums[i]]: " <<m_mapNums[nums[i]] <<endl;
            }  
            else
            {
                return true;
            }

        }
        return false;
    }
};