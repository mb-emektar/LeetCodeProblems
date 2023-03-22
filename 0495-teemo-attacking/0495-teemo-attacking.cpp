class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long minusTotal = 0;

        for(int i = 0; i < timeSeries.size()-1; i++)
        {
            if(timeSeries[i+1]-timeSeries[i] < duration)
            {
                minusTotal += duration -(timeSeries[i+1]-timeSeries[i]);
            }
        }
        return (duration*timeSeries.size() - minusTotal);
    }
};