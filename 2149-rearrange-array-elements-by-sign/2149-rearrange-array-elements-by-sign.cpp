class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        vector<int> nums3;
        for(auto c:nums){
            if(c>0){
                nums1.push_back(c);
            }
            else{
                nums2.push_back(c);
            }
        }
        auto it1=nums1.begin();
        auto it2=nums2.begin();
        while(it1!=nums1.end()&&it2!=nums2.end()){
            nums3.push_back(*it1);
            nums3.push_back(*it2);
            it1++;
            it2++;
        }
        return nums3;
        
        
        
    }
};