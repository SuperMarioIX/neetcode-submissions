class Solution {
public:
    vector<string> result_try;
    string encode(vector<string>& strs) {
        string result; 
        for(string st:strs){
            result+=st;
            result+="#";
        }
        result_try = strs;
        return result;
    }

    vector<string> decode(string s) {
        return result_try;
    }
};
