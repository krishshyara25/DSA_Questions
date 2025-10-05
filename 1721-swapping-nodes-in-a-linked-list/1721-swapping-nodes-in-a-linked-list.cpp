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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;
        ListNode* current = head;

        for(int i=1;i<k;i++){
            first = first->next;
        }

        current = first;

        while(current->next){
            current = current->next;
            second = second->next;
        }

        int temp = first->val;
        first->val = second->val;
        second->val = temp;

        return head;
    }
};