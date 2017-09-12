class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l = citations.size();
        int start = 0;
        int end = l;
        while(end>start){
        	int mid = start + ((end - start)>>1);
        	if(citations[mid]<l-mid){
        		start = mid + 1;
        	}
        	else {
        		end = mid;
        	}
        }
        return l-start;
    }
};
