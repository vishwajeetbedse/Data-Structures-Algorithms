class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> a;
        vector<int> res;
        int l = nums2.size();
        for(int n : nums1){
            int idx = -1;
            for(int i = 0 ; i < l ; i++){
                if(n == nums2[i]){
                    idx = i;
                    break;
                } 
            }
            int occur = -1;
            for(int i = idx ; i < l ; i++){
                if(nums2[i] > n){
                    occur = nums2[i];
                    break;
                }
            }
            res.push_back(occur);
        }
        return res;
    }
};