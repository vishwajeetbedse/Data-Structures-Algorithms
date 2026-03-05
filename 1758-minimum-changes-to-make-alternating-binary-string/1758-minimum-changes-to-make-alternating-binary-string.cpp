class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int res = 0;


        if(s[0] == '0'){
            for(int i = 1 ; i < n ; i ++){
                if(i % 2 == 0 && s[i] == '1') res++;
                else if(i % 2 == 1 && s[i] == '0') res++;
            }
        }
        if(s[0] == '1'){
            for(int i = 1 ; i < n ; i ++){
                if(i % 2 == 1 && s[i] == '1') res++;
                else if(i % 2 == 0 && s[i] == '0') res++;
            }
        }
        return min(res , n - res);
    }
};