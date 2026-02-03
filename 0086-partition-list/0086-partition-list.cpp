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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        ListNode* temp = head;
        while(temp){
            if(temp->val < x){
                ptr->next = new ListNode(temp->val);
                ptr = ptr->next;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(temp->val >= x){
                ptr->next = new ListNode(temp->val);
                ptr = ptr->next;
            }
            temp = temp->next;
        }
        return ans->next;
    }
};