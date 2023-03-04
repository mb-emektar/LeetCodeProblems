class Solution {
public:
    int findNumbers(vector<int>& nums) {

    int evenNumberCount = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(((int)log10(nums[i]) % 2) == 1 )
            evenNumberCount+=1;
        }
        return evenNumberCount;   

        /*int evens = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            bool even = 0;
            while((nums[i]/10) > 0) 
            {
                nums[i] = nums[i]/10; 
                even = even ^ 1;
            }
            if(even == 1)evens+=1;
        }
        return evens;*/
    }
};