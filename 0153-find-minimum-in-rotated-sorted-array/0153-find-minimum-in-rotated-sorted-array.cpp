class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int ans=nums[0];
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            ans=min(ans,nums[mid]);
            if(nums[left]<=nums[mid]){
                if(nums[mid]<=nums[right]){
                    right=mid-1;
                }
                else{
                left=mid+1;}
            }
            else{
                right=mid-1;
            }
        }
        return ans;
        
    }
};