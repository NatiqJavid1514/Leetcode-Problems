class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x=n;
        int flag=0;
        for(int i=0;i<50;i++){
            if(pow(2,i)==n){
                flag=1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag==1){
            return true;
        }
        else
        return false;
        
    }
};