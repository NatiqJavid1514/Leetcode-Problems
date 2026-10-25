class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int realsum=(n*(n+1))/2;
        int sum=0;
        for(auto c:nums){
            sum+=c;

        }
        return realsum-sum;
        
    }
};