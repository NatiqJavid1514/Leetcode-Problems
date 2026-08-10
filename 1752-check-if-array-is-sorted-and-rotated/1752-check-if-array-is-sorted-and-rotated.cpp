class Solution {
public:
    bool check(vector<int>& nums) {
        vector <int> num2;
        int flag=0;
        copy(nums.begin(),nums.end(),back_inserter(num2));
        if(num2[nums.size()-1]>nums[0]){
            flag++;
        }
        
        for(int i=0;i<nums.size()-1;i++){
            if(num2[i]>num2[i+1]&&num2[nums.size()-1]){
            flag++;
            
            }
            else{
                continue;
            }
        }
        if(flag==0|| flag==1)
        return true;
        else
        return false;
        
    }
};