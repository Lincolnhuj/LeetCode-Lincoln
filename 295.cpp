class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> large,small;

    void addNum(int num) {
        if (small.empty() or num <= small.top()) small.push(num);
        else large.push(-num);
        if (small.size() > large.size() + 1)  large.push(-small.top()), small.pop();
        else if (large.size() > small.size())   small.push(-large.top()), large.pop();
    }
    
    double findMedian() {
        if ((small.size() + large.size()) & 1)  return (double)small.top();
        else return ((double)small.top() - large.top()) / 2;
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */
