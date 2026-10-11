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
    bool hasCycle(ListNode *head) {
        bool ans=false;
        if(head!=NULL){
        ListNode *temp=head;
        ListNode *temp2=head;
        // temp2=temp2->next;

        while(temp2!=NULL && temp2->next!=NULL){
            temp=temp->next;
            temp2=temp2->next->next;
            if(temp==temp2){
                ans=true;
                break;

            }
            
        }}
        return ans;
        
        
    }
};