class Solution {
public:
    vector <int> original;
    Solution(vector<int> nums) {
        this->original = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return this-> original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> shuf (this->original);
        int n = shuf.size();
        for(int i = 0; i<n; i++){
            int pos = rand()%(n-i);
            swap(shuf[i],shuf[i+pos]);
        }
        return shuf;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
