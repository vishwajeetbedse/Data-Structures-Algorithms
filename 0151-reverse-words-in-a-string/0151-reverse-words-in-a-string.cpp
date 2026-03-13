class Solution {
public:
    string reverseWords(string s) {
        int l = 0, r = 0,i = 0;
        int n = s.size();
        reverse(s.begin(),s.end());
        while(i < n){
            while(s[i] == ' ' && i<n) i++;
            if(i == n) break;
            while(s[i] != ' ' && i<n) s[r++] = s[i++]; 
            
            reverse(s.begin() + l, s.begin() + r);
            s[r++] = ' ';
            l = r;
            i++;
        }
        s.resize(r-1);
        return s;
    }
    
};