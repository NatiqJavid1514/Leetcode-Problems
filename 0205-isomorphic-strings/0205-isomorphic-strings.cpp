class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool ans=true;
        unordered_map  <char,char> mp1,mp2;
        for(int i=0;i<s.length();i++){
            if(mp1.find(s[i])!=mp1.end()){
            if(mp1[s[i]]!=t[i]){
            ans=false;
            break;
            }
            }
            else if(mp2.find(t[i])!=mp2.end()){
                if(mp2[t[i]]!=s[i]){
                    ans=false;
                    break;
                }
                }
            else{
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];

            }

            }
            return ans;
        }
        

        
    };
