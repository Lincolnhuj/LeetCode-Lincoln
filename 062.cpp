class Solution {
private:
	unordered_map<int,unordered_map<int,int> > memory;
public:
    int uniquePaths(int m, int n) {
        if(m<0 or n<0){return 0;}
        if(m==1 and n == 1){return 1;}
        if(memory[m][n]){return memory[m][n];}
        int leftP = uniquePaths(m-1,n);
        int rightP = uniquePaths(m,n-1);
        memory[m][n] = leftP + rightP;
        return memory[m][n];
    }
};
