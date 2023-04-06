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
        ListNode* temp=node;
        ListNode* temp1=NULL;
        while(temp->next!=NULL){
            temp->val=temp->next->val;
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
    }
};
