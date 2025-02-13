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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* newHead = head->next;

        ListNode* prev = NULL;
        ListNode* current = head;

        while(current != NULL && current->next != NULL){
            ListNode* first = current;
            ListNode* second = current->next;

            first->next = second->next;
            second->next = first;

            if(prev != NULL){
                prev->next = second;
            }

            prev = first;
            current = first->next;
        }
        return newHead;
    }
};