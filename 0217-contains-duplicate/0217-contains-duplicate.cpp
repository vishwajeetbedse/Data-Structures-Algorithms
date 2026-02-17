class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> num;
        for(int n : nums){
            num[n] += 1;
            if(num[n] > 1) return true;
        }
        return false;
    }
};