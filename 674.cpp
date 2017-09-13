class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l = nums.size();
        unordered_map <int,int> result;
        if(l == 0) return 0;
        else if(l == 1) return 1;
        else{
        	int p = 0;
        	while(p < l-1){
        		result[p] = 1;
        		for(int i = 0; i+p < l-1; i++){
        			if(nums[p+i]<nums[p + i+1]){
        				result[p] ++;
        			}
        			else break;
        		}
        		p++;
        	}
        	vector<vector<int> > rresult(l+1);
        	for(auto item : result){
        		rresult[item.second].push_back(item.first);
        	}
        	int finalResult = 0;
        	for(int i = 0; i<l+1; i++){
        		if(!rresult[i].empty()) finalResult = i;
        	}
        	return finalResult;
        }
    }
};
