class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        set <int> wind;
        for(auto c:nums){
            if(c!=0){
                sum=sum+c;
            }
            else{ wind.insert(sum);
            sum=0;}
        }
        wind.insert(sum);
        auto it=wind.rbegin();
        return *it;
        
    }
};