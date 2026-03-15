class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0; 
        int r = height.size() - 1;
        int max_capacity = min(height[r],height[l])*abs(r-l);
        while(l < r){
            
            max_capacity = max(max_capacity,min(height[r],height[l])*abs(r-l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        
        return max_capacity;
    }
};