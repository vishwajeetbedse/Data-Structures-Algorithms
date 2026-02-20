class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0 ; i < n ; i++){
            int maxi = INT_MIN;
            if(n > i + 1) maxi = arr[i + 1];
            for(int j = i + 1 ; j < n ; j++){
                maxi = max(maxi , arr[j]);
            }
            arr[i] = maxi;
        }
        arr[n - 1] = -1;
        return arr;
    }
};