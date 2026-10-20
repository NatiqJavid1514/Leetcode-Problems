class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxproduct;
    int currentproduct;
    int i=0;
    int j=height.size()-1;
    while (i<j){
        
        if(height[i]<height[j]){
            currentproduct=height[i]*(j-i);
            maxproduct=max(currentproduct,maxproduct);
            i++;

        }
        else{
            currentproduct=height[j]*(j-i);
            maxproduct=max(currentproduct,maxproduct);
            j--;

        }


    }
    return maxproduct;

        
    }
};