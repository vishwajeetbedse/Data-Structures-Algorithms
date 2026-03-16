class Solution {
public:
    int minimumPushes(string word) {
        int res = 0;
        int ct = 1;
        int n = word.size();
        while(n >= 8){
            n-=8;
            res += ct * 8;
            ct++;
        }
        res += ct * n;
        return res;
    }
};