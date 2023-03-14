class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size() == 0) return 0;
        int out = 0;
        int i = g.size();
        int j = s.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for(; 0 < i && 0 < j;) 
        {
            if(g[i-1] <= s[j-1])
            {
                out++;
                i--;
                j--;
            }
            else
            {
                i--;
            }
        }
        return out;
    }
};