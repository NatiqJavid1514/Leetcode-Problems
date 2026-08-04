class Solution {
public:
    void reverseString(vector<char>& s) {
        auto it=s.begin();
        auto it1=s.end()-1;
        char temp;
        while(it<it1){
            temp=*it;
            *it=*it1;
            *it1=temp;
            it++;
            it1--;
        };
  
        
    }
};