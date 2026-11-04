class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int result = 0;
        int l = 0;

        for(int i = 0; i< s.size(); i++){
            while(charSet.find(s[i]) != charSet.end()){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[i]);
            result = max(result, i-l+1);
        }

        return result;
    }
};
