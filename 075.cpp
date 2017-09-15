class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = nums.size();
        for(int i = 0; i<l; i++){
        	for(int j = 0; j< i; j++){
        		if(nums[i]<nums[j]) swap(nums[i],nums[j]);
        	}
        }
    }
};
