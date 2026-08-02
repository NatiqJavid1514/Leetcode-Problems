class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector <int> nums3;
    copy(nums1.begin(),nums1.end(),back_inserter(nums3));
    copy(nums2.begin(),nums2.end(),back_inserter(nums3));
    sort(nums3.begin(),nums3.end());
     double median;
     if(nums3.size()%2==0){
        int x,y;
        x=(nums3.size()/2)-1;
        y=(nums3.size()/2);
        median=(nums3[x]+nums3[y])/2.0;
     }
     else{
        int z;
        z=(nums3.size()/2);
         median=nums3[z];
     }
     return median;


        
        
    }
};