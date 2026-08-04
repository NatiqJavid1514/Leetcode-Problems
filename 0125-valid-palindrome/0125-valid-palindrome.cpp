class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for(auto c:s){
            c=tolower(c);
            if(isalnum(c)){
                s2.push_back(c);
            }

        }
        string s3=s2;
        reverse(s3.begin(),s3.end());
        if(s2==s3){
            return true;
        }
        else{
            return false;
        }
        
        
        
    }
};