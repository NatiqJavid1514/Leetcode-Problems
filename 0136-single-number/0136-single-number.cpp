class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        
        for(auto c:nums){
            num=num^c;

        }
        return num;
        
    }
};