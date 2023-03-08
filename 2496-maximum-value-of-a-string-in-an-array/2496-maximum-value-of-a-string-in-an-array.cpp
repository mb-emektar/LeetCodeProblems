class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int out = 0;
        int ctrl = 0;
        for(int i = 0 ; i < strs.size() ; i++ )
        {
            ctrl = 0;
            for(int j = 0 ; j < strs[i].size() ; j++ )
            {
                if( (strs[i][j] < '0') || ('9' < strs[i][j]) )
                {
                    if(out < strs[i].size() )
                    { 
                        out = strs[i].size();
                    }
                    ctrl = 1;
                    break;
                }

            }
            if (ctrl == 0)
            {
                if ( out < stoi(strs[i]) ) out = stoi(strs[i]);
            }
        }

        return out;
    }
};