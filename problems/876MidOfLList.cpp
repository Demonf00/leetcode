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
    ListNode* middleNode(ListNode* head) {
        int length = 1;
        ListNode* current = head;

        //count the length of list
        while(current != nullptr)
        {
            length++;
            current = current->next;
        }

        int from = (length >> 1) + 1;

        current = head;
        for (int i = 1; i < from; ++i)
            current = current->next;

        ListNode* newList = new ListNode(current->val);
        ListNode* currentNew = newList;
        while(current != nullptr)
        {
            current = current->next;
            ListNode* nextNode = new ListNode(current->val);
            currentNew->next = nextNode;
            currentNew = nextNode;
        }
        return newList;
    }
};