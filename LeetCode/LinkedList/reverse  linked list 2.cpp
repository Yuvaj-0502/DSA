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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right){
            return head;
        }
        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* prev=temp;

        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode* curr=prev->next;
        for(int i=0;i<right-left;i++){
            ListNode* temp=curr->next;
            curr->next=temp->next;
            temp->next=prev->next;
            prev->next=temp;
        }
        return temp->next;
    }
};