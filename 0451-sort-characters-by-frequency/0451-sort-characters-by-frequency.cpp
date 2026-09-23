class Solution {
public:
    string frequencySort(string s) {
        string v;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            
        }
        vector<pair<char, int>> k;
        for(auto x:mp){
            k.push_back(x);
        }
        sort(k.begin(),k.end(),[](auto x,auto y){
            return x.second > y.second;
        });
        for(auto x:k){
            for(int i=0;i<x.second;i++){
                v.push_back(x.first);
            }
        }
        return v;


      
        
       }

    
     
    };
