class Solution {
public:
    int maxPower(string s) {
        int out = 1,temp = 1;
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                temp++;
            }
            else{
                out = max(out,temp);
                temp = 1;
            }
        }
        return max(out,temp);
    }
};