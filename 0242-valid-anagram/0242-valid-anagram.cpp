class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ans=false;
        unordered_map <char,int> a1;
        unordered_map <char,int> a2;
        for(auto c:s){
            a1[c]++;
        }
        for(auto c:t){
            a2[c]++;
        }
        if(a1==a2){
            ans=true;
        }
        return ans;
        
        
    }
};