class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p = 1;
        int l = 0, r = nums.size() - 1;
        for(int i = 0; i <= r; i++) {
            if(nums[i] < p) {
                swap(nums[i], nums[l]);
                l++;
            } else if(nums[i] > p) {
                swap(nums[i], nums[r]);
                r--;
                i--;
            }
        }
    }
        
    
};
