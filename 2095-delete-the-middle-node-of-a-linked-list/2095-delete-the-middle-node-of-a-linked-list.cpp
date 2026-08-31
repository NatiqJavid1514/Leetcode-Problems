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
        int count=0;
        int position;
       ListNode* temp=head;
       while(temp!=NULL){
       temp=temp->next;
       count++;}
       ListNode* temp1=head;
    ListNode *temp2;
    if(count==1){
        return nullptr;
    }
    else if(count%2==0){
        int position=count/2 +1;
        for(int i=1;i<position-1;i++){
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        temp2->next=NULL;
        delete temp2;

    }
    else{
        int position=count/2;
                for(int i=1;i<position;i++){
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        temp2->next=NULL;
        delete temp2;

        


        
    }
    return head;
    

    
    
    
    }


};