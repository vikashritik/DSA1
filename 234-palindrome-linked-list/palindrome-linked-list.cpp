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
    bool isPalindrome(ListNode* head) {
       if (head == NULL || head->next == NULL) 
            return true;

        ListNode *first = head;
        int count = 0;
        while (first) {
            count++;
            first = first->next;
        }

        int count_first = (count + 1) / 2;
        first = head;
        int steps = count_first - 1;
        while (steps--) {
            first = first->next;
        }

        ListNode *second = first->next;
        first->next = NULL;

        ListNode *prev = NULL, *next = NULL;
        while (second) {
            next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        while (prev) {
            if (prev->val != head->val) {
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
        return true; 
    }
};