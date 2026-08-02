class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector <int> num{};
        vector <int> num3{};
        vector <int> num2;
        vector <int> num4;

        //  auto it=num.begin();
        //  for(int i=0;i<2;i++){
        //     copy(num.begin(),num.end(),back_inserter(num2));
        //  }
        //  for(auto c:num2){
        //     cout<<c<<endl;
        //  }
                  
         for(int i=0;i<2;i++){
            copy(nums.begin(),nums.end(),back_inserter(num4));
         }
         //return num2;
         return num4;


        
    };
};