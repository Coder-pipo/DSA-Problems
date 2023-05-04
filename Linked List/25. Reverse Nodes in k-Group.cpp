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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        ListNode* dummyHead=new ListNode(0);
        dummyHead->next=head;
        ListNode* prev=dummyHead;
        ListNode* curr=NULL;
        ListNode* succ=NULL;

        while(count>=k){
            curr=prev->next;
            succ=curr->next;
            for(int i=1;i<k;i++){
                curr->next=succ->next;
                succ->next=prev->next;
                prev->next=succ;
                succ=curr->next;
            }
            prev=curr;
            count-=k;
        }
        return dummyHead->next;
        
    }
};
