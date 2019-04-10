class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode dummy(0);
		auto pre = &dummy;
		while (l1 && l2) {
			auto& next = l1->val < l2->val ? l1 : l2;
			pre->next = next;
			pre = next;
			next = next->next;
		}
		pre->next = l1 ? l1 : l2;
		return dummy.next;
	}
};