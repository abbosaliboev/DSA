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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        ListNode* current = head;
        int count = 0;

        while (current != NULL){
            if(s.count(current->val)){
                if(current->next == NULL || !s.count(current->next->val)){
                    count++;
                }
            }
            current = current->next;
        }

        return count;
    }
};