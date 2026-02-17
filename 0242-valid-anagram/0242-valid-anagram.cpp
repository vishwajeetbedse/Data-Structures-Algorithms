class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_mp;
        unordered_map<char,int> t_mp;
        for(char ch : s) s_mp[ch]++;
        for(char ch : t) t_mp[ch]++;
        if (s_mp == t_mp) return true;
        return false;
    }
};