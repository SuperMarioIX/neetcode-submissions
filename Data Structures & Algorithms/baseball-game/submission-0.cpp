class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st; 

        for(auto ch: operations){
            if(ch == "C" && !st.empty()){
                st.pop();
            }else
            if(ch == "D" && !st.empty()){
                int doub = st.top() * 2;
                st.push(doub);
            }else if(ch == "+"){
                int first = st.top();
                st.pop();
                int secound = st.top();
                st.push(first);
                st.push(first+secound);
            }
            else
            st.push(stoi(ch));
        }

        int sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }

        return sum;
    }
};