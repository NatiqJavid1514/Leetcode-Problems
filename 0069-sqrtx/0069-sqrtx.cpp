class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        long long int mid;
        long long int ans;
        while(left<=right){
            mid=(left+right)/2;
            if(mid*mid==x){
                ans=mid;
                break;
                
            }
            if((mid-1)*(mid-1)<x && mid*mid>x){
                ans=mid-1;
                break;
            }
            if(mid*mid>x){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
        
        
    }
    
};