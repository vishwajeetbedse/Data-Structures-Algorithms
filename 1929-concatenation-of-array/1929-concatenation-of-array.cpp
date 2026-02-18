class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.reserve(2 * nums.size());
        for(int n : nums) nums.push_back(n);
        return nums;
    }
};