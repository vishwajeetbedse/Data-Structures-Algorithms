class Solution {
public:
    int bitwiseComplement(int n) {
        if( n ==0) return 1;
        vector<int> res;
        while(n){
            res.push_back(n%2);
            n /= 2;
        }
        int count=0;
        for(int i=0;i < res.size(); i++) count += (!res[i]) * pow(2,i);
        return count;
    }
};