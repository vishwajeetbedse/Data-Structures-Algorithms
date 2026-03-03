class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        int j = 0;
        for(int i = 1 ; i <= n ; i++){
            if(target.size() == j) break;
            if(target[j] != i){
                s.push_back("Push");
                s.push_back("Pop");
            }else{
                s.push_back("Push");
                j++;
            }
        }
        return s;
    }
};