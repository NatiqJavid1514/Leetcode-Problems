class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> a;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                a.pop_back();

            }
            else if(operations[i]=="D"){
                a.push_back(2*a.back());


            }
            else if(operations[i]=="+"){
                a.push_back(a.back()+a[a.size()-2]);
            }
            else{
                a.push_back(stoi(operations[i]));
            }
        }
    int sum=0;
    for(auto c:a){
        sum+=c;
    }
    return sum;
        
    }
};