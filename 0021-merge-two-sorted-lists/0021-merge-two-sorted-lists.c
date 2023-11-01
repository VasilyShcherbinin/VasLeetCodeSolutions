/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
  struct ListNode mergedList;
  struct ListNode* mergedListPtr = &mergedList;
  while (list1 != NULL && list2 != NULL) {
      if (list1->val <= list2->val) {
        mergedListPtr->next = list1;
        list1 = list1->next;
      }
      else {
        mergedListPtr->next = list2;
        list2 = list2->next;
      }
      mergedListPtr = mergedListPtr->next;
  }

  mergedListPtr->next = (list1 == NULL) ? list2 : list1;
  return mergedList.next;
}