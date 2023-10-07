/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode * addTwoNumbers(struct ListNode * l1, struct ListNode * l2) {
  int value = 0;
  uint carry = 0;

  struct ListNode * result = NULL; // Initialize the result linked list
  struct ListNode * current = NULL; // Initialize the current node for the result list

  while (l1 != NULL || l2 != NULL || carry != 0) {

    value = carry;

    if (l1 != NULL) {
      value += l1 -> val;
      l1 = l1 -> next;
    }
    if (l2 != NULL) {
      value += l2 -> val;
      l2 = l2 -> next;
    }

    // Reset the carry if set
    if (carry == 1) {
      carry = 0;
    }

    // Set the carry flag
    if (value > 9) {
      value = value % 10;
      carry = 1;
    }

    struct ListNode * newNode = (struct ListNode * ) malloc(sizeof(struct ListNode));
    newNode -> val = value;
    newNode -> next = NULL;

    if (result == NULL) {
      result = newNode;
      current = result;
    } else {
      current -> next = newNode;
      current = newNode;
    }
  }
  return result;
}