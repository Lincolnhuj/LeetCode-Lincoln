class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int begin = 1, end = 1;
        int n = nums.size();
        vector <int> result(n,1);
        for(int i = 0; i<n; i++){
        	result[i] *= begin;
        	begin *= nums[i];
        	result[n-1-i] *= end;
        	end *= nums[n-1-i];
        }
        return result;
    }
};
