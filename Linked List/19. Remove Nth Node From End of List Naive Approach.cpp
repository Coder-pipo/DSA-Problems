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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        
        if(n>count){
            return head;
        }

        else if(n==count){
            head=head->next;
        }

        else{
            count=count-n-1;
            ListNode* temp1=head;
            while(count--){
                temp1=temp1->next;
            }
            temp1->next=temp1->next->next;
        }
        return head;
    }
};
