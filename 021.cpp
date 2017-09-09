class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    	ListNode* dummy = new ListNode(0);
    	ListNode* pointer = dummy;
    	while(l1&&l2){
    		if(l1->val > l2->val){
    			pointer->next = l1;
    			l1 = l1->next;
    		}
    		else{
    			pointer->next = l2;
    			l2 = l2->next;
    		}
    		pointer = pointer->next;
    	}
    	pointer->next = l1 ? l1 : l2;
    	return dummy->next;
    }
};
