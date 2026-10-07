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
        ListNode *temp=head;
        int count=1;
        
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        if(count==1){
            head=NULL;
            
        }
        else{

        ListNode *temp2=head;
        int pos=count-n+1;
        if(pos==1){
            head=head->next;
            temp2->next=NULL;

        }
        else{
        for(int i=1;i<pos-1;i++){
            temp2=temp2->next;


        }
         ListNode *temp3=NULL;
        temp3=temp2->next->next;
        temp2->next->next=NULL;
        temp2->next=temp3;}}
       
        return head;

        
        
    }
};