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
        ListNode* temp = head;
        int size = 0;

        while (temp) {
            size++;
            temp = temp->next;
        }
        int target = size - n;
        if (target == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        temp = head;
        for (int i = 1; i < target; i++) {
            temp = temp->next;
        }

        ListNode* num = temp->next;
        temp->next = temp->next->next;
        delete num;
        return head;
    }
};