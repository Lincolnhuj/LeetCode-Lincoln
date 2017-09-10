class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> dictionary;
        int n = nums.size();
        for(auto item : nums){
        	dictionary[item]++;
        }
        for(auto item : dictionary){
        	if(item.second == 1){
        		return item.first;
        	}
        }
    }
};
