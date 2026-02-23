class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if (!head || !head->next) return head;

        ListNode* h = head;
        ListNode* t = head->next;
        head = t;

        ListNode* d = nullptr;

        while (h && t) {
            h->next = t->next;
            t->next = h;

            if (d != nullptr) {
                d->next = t;
            }

            d = h;
            h = h->next;

            if (h)
                t = h->next;
        }

        return head;
    }
};
