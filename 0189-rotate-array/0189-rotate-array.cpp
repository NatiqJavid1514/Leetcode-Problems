class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums2;
        k=k%nums.size();
        if(nums.size()>1 &&k<nums.size()){
        auto it1=nums.begin();
        auto it2=nums.end()-k;
        while(it2!=nums.end()){
            nums2.push_back(*it2);
            it2++;
        }
        while(it1!=nums.end()-k){
            nums2.push_back(*it1);
            it1++;
        }
        nums.clear();
        copy(nums2.begin(),nums2.end(),back_inserter(nums));}
        
        
        
    }
};