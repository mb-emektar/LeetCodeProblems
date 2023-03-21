class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer;
        int totalSize = nums.size();
        int leftSum[totalSize];
        int rightSum[totalSize];

        memset( leftSum, 0, totalSize*sizeof(int) );
        memset( rightSum, 0, totalSize*sizeof(int) );

        for(int j = totalSize-2; -1<j; j--)
        {
            rightSum[j] = rightSum[j+1]+ nums[j+1];
        }
                
        for(int j = 0; j<totalSize; j++)
        {
            if(0<j)leftSum[j] = leftSum[j-1] + nums[j-1];
            answer.push_back(abs(leftSum[j] - rightSum[j]));
        }
        
    
        return answer;
    }
};