class Solution {
public:
    bool checkPerfectNumber(int num) {
        int out=0;
        if(num <2) return false;
        for(int i = 1 ; i*i<=num ; i++)
        {
            if(num%i == 0) 
            {
                out += i;
                if (i*i != num && i != 1) out += (num/i);
            }
            if (out > num) return false;
        }
        return (out==num);
    }
};