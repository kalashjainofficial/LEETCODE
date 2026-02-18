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
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* end = head;
        ListNode* deletee = head;
        ListNode* to = head;

        if(head == nullptr){
            return head;
        }
        if(head -> next == nullptr){
            head = nullptr;
            return head;
        }
        for(int a = 0 ; a< n-1 ; a++){
            end = end->next;
        }
       

        while(end->next!= nullptr){

            end = end->next;
            deletee = deletee->next;

            


        }
            if(deletee == head){
                head = head->next;
                return head;
            }
 if(to!= deletee){
        while(to->next!= deletee){
            to = to->next;

        }
        to->next = deletee->next;}
        return head;
    }
};