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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val == val){
            head = head->next;
        }
        if(head == nullptr) return nullptr;        

        ListNode* dummy = head;
        ListNode* current = head->next;
        
        while(current!=nullptr){
            if(current->val == val){
                dummy -> next = current->next;
            }else
                dummy = dummy->next;
            current = current->next;
        }

        return head;
    }
};