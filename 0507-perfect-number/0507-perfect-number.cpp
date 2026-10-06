class Solution {
public:
    bool checkPerfectNumber(int num) {
        bool ans=false;
        int sum=0;
        vector <int> nums;
        for(int i=1;i<num;i++){
            if(num%i==0){
                nums.push_back(i);

            }
        }
        for(auto c:nums){
            sum+=c;
        }
        if(sum==num){
            ans=true;

        }
        return ans;

        
    }
};