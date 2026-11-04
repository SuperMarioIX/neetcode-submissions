class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;
        for(auto ch: tokens){
            if(ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int a = result.top();
                result.pop();
                int b = result.top();
                result.pop();
                
                if(ch == "+") b += a;
                else if(ch == "-") b -= a;
                else if(ch == "*") b *= a;
                else if(ch == "/") b /= a;
                
                result.push(b);
            } else {
                result.push(stoi(ch));
            }
        }
        return result.top();
    }
};