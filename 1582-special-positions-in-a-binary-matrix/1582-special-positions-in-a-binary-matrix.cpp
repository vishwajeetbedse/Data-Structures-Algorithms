class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> row_oneCount(m,0);
        vector<int> col_oneCount(n,0);

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(mat[i][j] == 1){
                    row_oneCount[i]++;
                    col_oneCount[j]++;
                }
            }
        }
        int res = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(row_oneCount[i] == 1 && col_oneCount[j] == 1 && mat[i][j] == 1){
                    res++;
                }
            }
        }
        return res;
    }
};