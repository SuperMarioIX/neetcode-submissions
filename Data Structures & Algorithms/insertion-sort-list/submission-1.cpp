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
    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head; // Atenție: trebuie return head, nu doar return;

        bool schimbat;
        ListNode* curent;
        ListNode* ultimul = nullptr; 

        do {
            schimbat = false;
            curent = head;

            while (curent->next != ultimul) {
                if (curent->val > curent->next->val) {
                    // Interschimbăm valorile
                    int temp = curent->val;
                    curent->val = curent->next->val;
                    curent->next->val = temp;
                    
                    schimbat = true;
                }
                curent = curent->next;
            }
            ultimul = curent; 
        } while (schimbat);

        return head;
    }
};