class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int n = A.size();
        if(n == 0) return 0;
        unordered_map<int,int> dictionary;
        int result = 0;
        for(int i = 0; i<n; i++){
        	for(int j = 0; j<n; j++){
        		dictionary[A[i]+B[j]]++;
        	}
        }
        for(int i = 0; i<n;i++){
        	for(int j = 0; j<n;j++){
        		int goal = 0-C[i]-D[j];
        		if(dictionary.count(goal)!= 0) result += dictionary[goal];
        	}
        }
        return result;
    }
};
