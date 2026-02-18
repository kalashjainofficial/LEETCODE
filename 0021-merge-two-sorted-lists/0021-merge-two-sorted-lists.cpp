class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        priority_queue<int, vector<int>, greater<int>> pq; // min-heap
        ListNode* ans = new ListNode();
        ListNode* head = ans;

        // push values from both lists
        while(list1 != NULL){
            pq.push(list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL){
            pq.push(list2->val);
            list2 = list2->next;
        }

        // build result list
        while(!pq.empty()){
            ans->next = new ListNode(pq.top()); // allocate node
            ans = ans->next;
            pq.pop();
        }

        return head->next;
    }
};
