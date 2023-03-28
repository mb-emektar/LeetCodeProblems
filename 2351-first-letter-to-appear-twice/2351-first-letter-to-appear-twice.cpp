class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> letters;

        for(int i = 0; i < s.size(); i++)
        {
            std::map<char,int>::iterator it;
            it = letters.find(s[i]);
            if (it == letters.end())
            letters.insert({s[i], 1});
            else return s[i];
        }
        return 0;
    }
};