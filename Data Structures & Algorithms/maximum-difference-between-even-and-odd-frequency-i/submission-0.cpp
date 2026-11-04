class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {0};

        for(char ch : s){
            freq[ch - 'a']++;
        }

        int max_odd = 0;
        int min_even = 200;

        for(int i = 0; i < 26; i++){
            if(freq[i]==0)continue;

            if(freq[i]%2 != 0)
            max_odd = max(max_odd, freq[i]);
            else
            min_even = min(min_even, freq[i]);
        }
        //sort(freq, freq + 26);

        return max_odd-min_even;
    }
};