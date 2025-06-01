class Solution {
public:
    bool isValid(string s) {

        stack<char>st;
        for(char ch: s){
            //pusing all opening brackets into the stack
            if(ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
            } else{
                //check if stack is empty or top does not exist
                if(st.empty())return false;
                char top = st.top();
                if((ch == ')' && top=='(')||
                (ch == ']' && top=='[') ||
                (ch == '}' && top=='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
       return st.empty(); 
    }
};