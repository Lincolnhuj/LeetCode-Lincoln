using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map <int,int> dict;
        dict[0] = -1;
        int maxSize = 0;
        int ones = 0;
        int l = nums.size();
        for(int i = 0; i<l; i++){
        	ones += nums[i];
        	int overflow = ones - (i+1-ones);
        	if(dict.count(overflow) == 0){
        		dict[overflow] = i;
        	}
        	else{
        		maxSize = max(maxSize, i - dict[overflow]);
        	}
        }
        return maxSize;
    }
};
