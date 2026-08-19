class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> sol;
        sort(nums.begin(),nums.end());
        int currentsum=0;

        for(int i=0;i<=nums.size()-3;i++){
             if (i > 0 && nums[i] == nums[i - 1])
                continue;
            auto it=nums.begin()+(i+1);
            auto it1=nums.end()-1;
            while(it<it1){
                currentsum=0;
                currentsum+=nums[i];
                currentsum+=nums[it-nums.begin()];
                currentsum+=nums[it1-nums.begin()];
                if(currentsum==0){
                    sol.push_back({nums[i],nums[it-nums.begin()],nums[it1-nums.begin()]});
                    it++;
                    it1--;
                                        while (it < it1 && *it == *(it - 1))
                        it++;

                    // Skip duplicate third elements
                    while (it < it1 && *it1 == *(it1 + 1))
                        it1--;
                }
                else if(currentsum<0){
                    it++;
                }
                else{
                    it1--;
                }

            }
        }
        return sol;
        
    }
};