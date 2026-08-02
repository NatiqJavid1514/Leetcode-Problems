class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size;
        auto it=nums.begin();
        auto it2=nums.begin()+1;
        while(it2!=nums.end()){
            if(*it==*it2){
                nums.erase(it2);
  

            }
            else{
                it++;
                it2++;
            }
            
        }
        size=nums.size();
        return size;
        
        
        
    }
};