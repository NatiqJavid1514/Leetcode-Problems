class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector <int> nums2;
        auto it=nums.begin();
        auto it2=nums.begin()+n;
        while(it2!=nums.end()){
            nums2.push_back(*it);
            nums2.push_back(*it2);
            it++;
            it2++;
        }
        return nums2;
        


        

        
    }
};