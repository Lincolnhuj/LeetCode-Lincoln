class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> dictionary;
        for(auto item : nums){
        	dictionary[item] ++;
        }
        vector<vector<int>> reverseDic(nums.size()+1);
        for(auto item: dictionary){
        	reverseDic[item.second].push_back(item.first);
        }
        vector<int> result;
        for(int i = reverseDic.size()-1; i>=0&&k>0; i--){
        	if(!reverseDic[i].empty()){
        		int j = 0;
        		while(k>0 &&j<reverseDic[i].size()){
        			result.push_back(reverseDic[i][j++]);
        			k--;
        		}
        	}
        }
        return result;
    }
};
