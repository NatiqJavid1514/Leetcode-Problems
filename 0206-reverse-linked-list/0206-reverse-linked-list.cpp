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
    ListNode* reverseList(ListNode* head) {
        struct ListNode *prev;
        struct ListNode *temp;
        struct ListNode *current;
        prev=NULL;
        current=head;
        
        while(current!=NULL){
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp; 
        }
        head=prev;
        return head;

        
    }
};