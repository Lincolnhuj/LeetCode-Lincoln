class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> dictionary;
        int l = nums.size();
        if(l < 2) return false;
        for(int i = 0, sum = 0; i < l; i++ ){
        	sum += nums[i];
        	int remainder = k== 0 ? sum : sum%k;
        	if( k == 0){
        		if(i>0 and nums[i-1] == 0 and nums[i] == 0) return true;
        	}
        	else{
        		if(dictionary.find(remainder) != dictionary.end() or i>0 and remainder==0) return true;	
        	}
        	dictionary[remainder] = i;
        }
        return false;
    }
};
