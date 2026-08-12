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
    ListNode* middleNode(ListNode* head) {
       struct ListNode *temp;
       temp=head;
       int count=1;
       while(temp->next!=NULL){
        temp=temp->next;
        count++;
       }
       struct ListNode *result;
       struct ListNode *temp2=head;

       if(count%2==0){
        int position=count/2;


        for(int i=1;i<position+1;i++){
            temp2=temp2->next;

            
            
        }
        
       }
       else{
        int position=(count/2)+1;
        for(int i=1;i<position;i++){
            temp2=temp2->next;
        }
       }
       return temp2;

        
    }
};