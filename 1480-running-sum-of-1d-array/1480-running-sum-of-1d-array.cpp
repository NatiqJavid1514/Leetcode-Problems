class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int rs=0;
        for(int i=0;i<nums.size();i++){
            rs+=nums[i];
            nums[i]=rs;
        }
        return nums;
        
    }
};