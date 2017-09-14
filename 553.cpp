class Solution {// Lincoln 3ms
public:
    string optimalDivision(vector<int>& nums) {
        unsigned int l = nums.size();
        string result = "";
        if(l == 0) return "";
        else if(l < 3){
        	for(int i = 0; i < l-1; i++){
        		result += to_string(nums[i]);
        		result += "/";
        	}
        	result += to_string(nums[l-1]);
        }
        else{
        	result += to_string(nums[0]);
        	result += "/(";
        	result += to_string(nums[1]);
        	for(int i = 2; i < l; i++){
        		result += "/";
        		result += to_string(nums[i]);
        		}
        	result += ")";	
        }
        return result;
    }
};
