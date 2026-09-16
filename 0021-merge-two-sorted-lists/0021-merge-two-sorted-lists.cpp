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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     if(list1==NULL && list2==NULL){
        return {};
     }
      if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;
     ListNode *temp1,*temp2,*x,*temp3;
      temp1=list1;
      temp2=list2;
      if(list1->val <= list2->val){
        x=list1;
        temp1=temp1->next;
      }
      else{
        x=list2;
        temp2=temp2->next;
      }
      temp3=x;

      while(temp1!=NULL && temp2!=NULL){
        if(temp1->val <= temp2->val){
            temp3->next=temp1;
            temp1=temp1->next;
            temp3=temp3->next;
}
else{
    temp3->next=temp2;
    temp2=temp2->next;
    temp3=temp3->next;

}
}
if(temp1!=NULL){
    temp3->next=temp1;
}
else{
    temp3->next=temp2;
}
    return x;
    }
};