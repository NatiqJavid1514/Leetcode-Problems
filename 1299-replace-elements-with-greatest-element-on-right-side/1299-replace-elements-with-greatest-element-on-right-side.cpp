class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int mx=-1;
        int original;
        for(int i=arr.size()-1;i>=0;i--){
            original=arr[i];
            arr[i]=mx;

            mx=max(original,mx);
        }
        return arr;


        
        
        
      
        
        
    }
   
};