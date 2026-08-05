class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto it=nums.begin();
        auto it2=nums.begin()+1;
        
        int req;
        int ind1,ind2;
        
for(int i=0;i<nums.size();i++){
    req=target-nums[i];
    it=find(nums.begin(),nums.end(),req);
    if(it!=nums.end()&&(it-nums.begin())!=i){
        ind1=i;
        ind2=it-nums.begin();
        
    }
    else{
        continue;
    }
    



    
}
vector <int> indices;
indices.push_back(ind1);
indices.push_back(ind2);

return indices;


    

        
        
    }
};