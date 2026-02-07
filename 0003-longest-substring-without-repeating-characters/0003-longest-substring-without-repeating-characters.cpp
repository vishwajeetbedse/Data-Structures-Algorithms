class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0,r = 0;
        int max_length = 0 ;
        unordered_map<char , int> count;

        for(r = 0 ; r < s.length() ; r ++){
            char c = s[r];
            count[c] = count[c] + 1;
            while(count[c] > 1){
                char left_char = s[l];
                count[left_char] = count[left_char] - 1;
                l++;
            }
            max_length = max(max_length , r - l + 1);
        }
        return max_length;
    }
};