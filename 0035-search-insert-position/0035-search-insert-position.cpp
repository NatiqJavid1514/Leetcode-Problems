class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it=find(nums.begin(),nums.end(),target);
        int x;
        if(it!=nums.end()){
            x=it-nums.begin();
        }

        else{
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            auto it2=find(nums.begin(),nums.end(),target);
            x= it2-nums.begin();
                
            }
            return x;

        }

        
    
};