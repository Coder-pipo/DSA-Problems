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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;

        int carry=0;
        ListNode* dummy=NULL;
        while(temp1!=NULL||temp2!=NULL||carry){
            int val=0;
            if(temp1!=NULL){
                val+=temp1->val;
                temp1=temp1->next;
            }

            if(temp2!=NULL){
                val+=temp2->val;
                temp2=temp2->next;
            }
            val+=carry;
            carry=val/10;
            val=val%10;
            dummy=push(dummy,val);
        }
        return dummy;
    }

    ListNode* push(ListNode* dummy,int val){
        ListNode* temp=new ListNode(val);
        if(dummy==NULL){
            dummy=temp;
            return dummy;
        }
        ListNode* temp1=dummy;
        while(temp1->next!=NULL)
            temp1=temp1->next;

        temp1->next=temp;
        return dummy;
    }
};
