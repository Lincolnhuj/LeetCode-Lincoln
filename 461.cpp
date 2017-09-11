class Solution {
public:
    int hammingDistance(int x, int y) {
    	int result = 0;
    	for(int i = 31; i>=0; i--){
    		result += ((x>>i&1)^(y>>i&1));
    	}
    	return result;
    }
};
