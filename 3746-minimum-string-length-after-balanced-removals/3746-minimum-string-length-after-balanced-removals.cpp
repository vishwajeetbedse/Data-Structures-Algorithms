class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();
        int a_count = count(s.begin() , s.end() , 'a');
        int b_count = count(s.begin() , s.end() , 'b');
        return abs(a_count - b_count);
    }
};