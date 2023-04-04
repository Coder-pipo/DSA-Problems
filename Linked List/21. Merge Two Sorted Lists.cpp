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
    ListNode* push(ListNode* list3,int val){
        ListNode* node=list3;
        ListNode* temp=new ListNode(val);
        if(list3==NULL){
            list3=temp;
            return list3;
        }
        while(node->next!=NULL){
            node=node->next;
        }

        node->next=temp;
        return list3;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;

        ListNode* list3=NULL;

        if(temp1==NULL&&temp2==NULL)
            return NULL;

        else if(temp1==NULL)
            return list2;

        else if(temp2==NULL)
            return list1;

        else{
            while(temp1!=NULL&&temp2!=NULL){
                if(temp1->val==temp2->val){
                    list3=push(list3,temp1->val);
                    list3=push(list3,temp2->val);

                    temp1=temp1->next;
                    temp2=temp2->next;
                }

                else if(temp1->val<temp2->val){
                    list3=push(list3,temp1->val);
                    temp1=temp1->next;
                }

                else{
                    list3=push(list3,temp2->val);
                    temp2=temp2->next;
                }
            }

            while(temp1!=NULL){
                list3=push(list3,temp1->val);
                temp1=temp1->next;
            }

            while(temp2!=NULL){
                list3=push(list3,temp2->val);
                temp2=temp2->next;
            }

            return list3;
        }
    }
};
