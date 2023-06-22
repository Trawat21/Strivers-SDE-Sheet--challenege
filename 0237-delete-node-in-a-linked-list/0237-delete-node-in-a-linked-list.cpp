/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
         node -> val = node->next->val; // in this way we copied the value of the next node to 
         node->next = node->next->next;                              //our original node
         
    }
};