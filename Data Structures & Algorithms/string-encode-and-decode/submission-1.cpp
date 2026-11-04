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
        vector<string> result;
        string local = "";

        for(char ch: s){
            if(ch=='#'){
                result.push_back(local);
                local = "";
            }else
            local+=ch;
        }

        return result_try;
    }
};
