class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<int> startOK;
        int total = 0;
        for(int i = 0 ; i < startTime.size() ; i++ )if(startTime[i]<=queryTime)startOK.push_back(i);
            
        
        for (int i = 0 ; i < startOK.size() ; i++ )if(endTime[startOK[i]]>=queryTime)total++;
        
        return total;
    }
};