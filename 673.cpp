class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> record(nums.size(), 1);
        vector<int> cnt(nums.size(), 1);
        int size = nums.size();
        int maxLen = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < i; ++j) {
                 if (nums[i] > nums[j]) {
                     if (record[i] < record[j] + 1) {
                         record[i] = record[j] + 1;
                         cnt[i] = cnt[j];
                     } else if (record[i] == record[j] + 1) {
                         cnt[i] += cnt[j];
                     }
                 }
            }
            maxLen = max(maxLen, record[i]);
        }
        //get most len for each element
        int amount = 0;
        for (int i = 0; i < size; ++i) {
            if (record[i] == maxLen) {
                amount+=cnt[i];
            }
        }
        //get amount of maxLen paths
        return amount;
    }
};
