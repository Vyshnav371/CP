class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")
            return 0;
        unordered_map<char, int> mp;
        int n = s.size();
        int start = 0, maxLength = 0;
        
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) != mp.end() && mp[s[i]] >= start) {
                start = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            maxLength = max(maxLength, i - start + 1);
        }
        
        return maxLength;
    }
};