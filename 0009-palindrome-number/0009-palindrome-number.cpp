class Solution {
public:
    bool isPalindrome(int x) {
        int rem,temp;
        long long int reversednum=0;
        temp=x;

        if(x>0){
        
        while(temp!=0){
            rem=temp%10;
            reversednum=reversednum*10 +rem;
            temp=temp/10;
        }}
        else if(x==0){
            return true;
        }
        else{
            return false;
        }
        if(reversednum==x){
            return true;
        }
      
        
        else{
            return false;
        }

        
    }
};