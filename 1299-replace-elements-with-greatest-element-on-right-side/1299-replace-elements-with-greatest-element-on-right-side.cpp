class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        
        
        if(arr.size()==1){
            arr.front()=-1;
        }
        else{
            for(int i=1;i<arr.size();i++){
               auto max=max_element(arr.begin()+i,arr.end());
               arr[i-1]=*max;

            }

        }
        arr.back()=-1;
        return arr;
        
        
    }
   
};