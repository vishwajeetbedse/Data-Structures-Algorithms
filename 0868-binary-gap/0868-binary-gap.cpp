class Solution {
public:
    int binaryGap(int n) {
        if(__builtin_popcount(n) == 1) return 0; 
        vector<int> bin;
        int i = 0; 
        while(n != 0){
            bin.push_back(n % 2);
            n /= 2;
            i++;
        }
        reverse(bin.begin(),bin.end());
        
        int l = bin.size();
        int res = 0;
        int count = 0;
        int lastOneIndex = -1;
        for (int i = 0; i < l; ++i) {
            if (bin[i] == 1) {
                if (lastOneIndex != -1) {
                    int count = i - lastOneIndex;
                    res = max(res, count);
                }
                lastOneIndex = i;
            }
        }
        
        return res;
        }
};