class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int out = words.size();
        for(int i = 0 ; i < words.size() ; i++)
        {
            for(int j = 0 ; j < words[i].size() ; j++)
            {
                if( words[i][j] != s[j] )
                {
                    out--;        
                    break;
                }
            }
        }
        return out;
    }
};