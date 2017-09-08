class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> dictionary;
        for(auto & x : nums1){
        	dictionary[x]++;
        }
        vector <int> result;
        for(auto & x : nums2){
        	if(dictionary[x]-- > 0){
        		result.push_back(x);
        	}
        }
        return result;
    }
};
