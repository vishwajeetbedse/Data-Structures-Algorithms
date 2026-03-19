class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> comp = {{'}','{'} , {')','('} , {']','['}};
        for(char c : s){
            if(comp.find(c) == comp.end()) st.push(c);
            else if(!st.empty() && comp[c] == st.top()) st.pop();
            else return false;
        }
        return st.empty();
    }
};