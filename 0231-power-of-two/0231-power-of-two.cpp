class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        if(log2(n) != ceil(log2(n)) ) return false;
        return true;
    }
};