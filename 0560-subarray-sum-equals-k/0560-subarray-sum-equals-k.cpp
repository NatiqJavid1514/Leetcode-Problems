class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int currentsum=0;
        int i=0;
        int req;
        int count=0;
        while(i<nums.size()){
        currentsum+=nums[i];
        req=currentsum-k;
        auto it=mp.find(req);
        if(it!=mp.end()){
            count+=mp[req];
            
        }
        
            mp[currentsum]++;
            i++;
            
            
        


        }
        return count;
        
    }
};