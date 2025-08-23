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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* temp3 = nullptr;
        ListNode* head = nullptr;

        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        if (temp1->val < temp2->val) {
            head = temp1;
            temp1 = temp1->next;
        } else {
            head = temp2;
            temp2 = temp2->next;
        }
        temp3 = head;

        while (temp1 != nullptr && temp2 != nullptr) {
            if (temp1->val < temp2->val) {
                temp3->next = temp1;
                temp1 = temp1->next;
            } else {
                temp3->next = temp2;
                temp2 = temp2->next;
            }
            temp3 = temp3->next;
        }
        if (temp1 != nullptr)
            temp3->next = temp1;
        if (temp2 != nullptr)
            temp3->next = temp2;
        return head;
    }
};