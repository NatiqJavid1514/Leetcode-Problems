class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int size = 0;

        unordered_map<char, int> mp;

        while (j < s.size()) {

            auto it = mp.find(s[j]);

            if (it != mp.end()) {
                i = max(i, it->second + 1);
            }

            mp[s[j]] = j;

            size = max(size, j - i + 1);

            j++;
        }

        return size;
    }
};