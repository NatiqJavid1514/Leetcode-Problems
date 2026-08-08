class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> squares;
        for(auto c:nums){
           squares.push_back(c*c);
        }
        sort(squares.begin(),squares.end());
        return squares;
    }
};