class Solution {
public:
    bool rotateString(string s, string goal) {
        bool ans=false;
        string s1=s+s;
        if(goal.length()==s.length()){
        if(s1.contains(goal)){
            ans=true;
        }}
        
        
        return ans;
        
        
    }
};