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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return NULL;

        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        if(count==1)
            return NULL;

        else if(count==2){
            head->next=NULL;
            return head;
        }

        count=(count/2)-1;
        ListNode* temp1=head;
        while(count--){
            temp1=temp1->next;
        }
        temp1->next=temp1->next->next;

        return head;
    }
};
