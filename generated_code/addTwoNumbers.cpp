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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *result = nullptr;
        ListNode *current = nullptr;

        // Iterate through the lists until both are empty
        while (l1 != nullptr || l2 != nullptr) {
            // Calculate the sum of the current digits and the carry
            int sum = ((l1 != nullptr) ? l1->val : 0) + ((l2 != nullptr) ? l2->val : 0) + carry;
            carry = sum / 10;
            sum %= 10;

            // Create a new node with the current digit and link it to the result list
            ListNode *newNode = new ListNode(sum);
            if (result == nullptr) {
                result = newNode;
                current = newNode;
            } else {
                current->next = newNode;
                current = newNode;
            }

            // Advance to the next digit in both lists
            if (l1 != nullptr) {
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }

        // Add the carry to the result list if it is non-zero
        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        return result;
    }
};