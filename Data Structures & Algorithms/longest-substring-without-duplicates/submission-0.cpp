class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int longest=0;
        int l=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            longest=max(longest,r-l+1);
        }
        return longest;
    }
};
