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
    int getDecimalValue(ListNode* head) {
        int size = 0;
        int sum = 0;
        ListNode* temp = head;

        while(temp!=nullptr){
            size++;
            temp = temp->next;
        }

        ListNode* temp1 = head;
        while(temp1!=nullptr){
            if(temp1->val != 0){
                sum += pow(2,size-1);
            }
            size--;
            temp1 = temp1 -> next;
        }
        return sum;
    }
};