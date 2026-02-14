class Solution {
public:
    string largestEven(string s) {
        while(!s.empty()){
            if((s.back()-'0')%2 == 1){
                s.pop_back();
            }else{
                break;
            }
        }
        return s ; 
    }
};