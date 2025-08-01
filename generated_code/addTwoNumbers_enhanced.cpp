#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Initialize a variable to store the carry
        int carry = 0;
        // Create a new list node to store the result
        ListNode *result = nullptr;

        // Iterate through the lists until both are empty
        while (l1 != nullptr && l2 != nullptr) {
            // Calculate the sum of the current digits and the carry
            int sum = ((l1->val + l2->val) % 10) + carry;
            // Update the carry for the next iteration
            carry = (l1->val + l2->val) / 10;
            // Create a new list node with the current digit and link it to the result list
            ListNode *newNode = new ListNode(sum % 10);
            if (result == nullptr) {
                result = newNode;
            } else {
                result->next = newNode;
            }
            // Advance to the next digit in both lists
            l1 = l1->next;
            l2 = l2->next;
        }

        // Add the remaining digits of one list to the result list
        while (l1 != nullptr) {
            int sum = ((l1->val + carry) % 10);
            carry = (l1->val + carry) / 10;
            ListNode *newNode = new ListNode(sum % 10);
            if (result == nullptr) {
                result = newNode;
            } else {
                result->next = newNode;
            }
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            int sum = ((l2->val + carry) % 10);
            carry = (l2->val + carry) / 10;
            ListNode *newNode = new ListNode(sum % 10);
            if (result == nullptr) {
                result = newNode;
            } else {
                result->next = newNode;
            }
            l2 = l2->next;
        }

        // Add the carry to the result list if it is non-zero
        if (carry > 0) {
            ListNode *newNode = new ListNode(carry);
            result->next = newNode;
        }

        return result;
    }
};