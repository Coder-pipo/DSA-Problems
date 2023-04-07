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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headB!=NULL){
            ListNode* tempA=headA;
            while(tempA!=NULL){
                if(tempA==headB){
                    return headB;
                }
                tempA=tempA->next;
            }
            headB=headB->next;
        }
        return NULL;
    }
};
