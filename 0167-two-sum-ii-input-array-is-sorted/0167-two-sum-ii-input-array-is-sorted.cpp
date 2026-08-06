class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> ind;
        int req;
        int a1;
        int a2;
        auto it=numbers.begin();
        auto it2=numbers.end()-1;
     
        while(((*it)+(*it2))!=target){
          if(((*it)+(*it2))>target){
            it2--;
          }
          else{
            it++;
          }
}
a1=(it-numbers.begin())+1;
a2=(it2-numbers.begin())+1;
        ind.push_back(a1);
        ind.push_back(a2);
        return ind;

        
        
         
        
    }
};