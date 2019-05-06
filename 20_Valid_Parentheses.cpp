class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool flag = true;
        for ( char& it: s )
        {
            if( it == ')' || it == ']' || it == '}' )
            {
                if ( st.empty() 
                   || ( it == ')' && st.top() != '(' ) 
                   || ( it == ']' && st.top() != '[' )
                   || ( it == '}' && st.top() != '{' ) ) {
                    flag = false;
                    break;
                }
                else st.pop();
            }
            else st.push(it);
        }
        if ( !st.empty()) flag = false;
        return flag;
    }
};
