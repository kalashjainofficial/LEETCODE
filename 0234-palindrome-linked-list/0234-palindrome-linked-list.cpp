/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* reversell(ListNode* head) {
        ListNode* p = nullptr;
        ListNode* h = head;
        ListNode* n = nullptr;

        while (h != nullptr) {
            n = h->next;
            h->next = p;
            p = h;
            h = n;
        }

        return p;
    }

public:
    bool isPalindrome(ListNode* head) {

        ListNode* c = head;

        if (head == nullptr || head->next == nullptr)
            return true;

        int count = 0;

        while (head != nullptr) {
            count++;
            head = head->next;
        }

        ListNode* rev = c;
        ListNode* prev = nullptr;

        int n = count / 2;

        while (n != 0) {
            prev = rev;
            rev = rev->next;
            n--;
        }

        // skip middle node for odd length
        if (count % 2 != 0) {
            rev = rev->next;
        }

        prev->next = nullptr;

        rev = reversell(rev);

        while (c != nullptr && rev != nullptr) {

            if (c->val != rev->val) {
                return false;
            }

            c = c->next;
            rev = rev->next;
        }

        return true;
    }
};