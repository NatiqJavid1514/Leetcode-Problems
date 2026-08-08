class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> freq;
        bool is=false;
        for(auto c:nums){
            freq[c]++;
        }
        for(auto c:freq){
            if(c.second>=2){
                is=true;
            }
            else{
                continue;
            }
        }
        return is;
        
    }
};