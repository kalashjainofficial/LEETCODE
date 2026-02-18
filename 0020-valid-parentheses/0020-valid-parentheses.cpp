class Solution {
public:
    bool isValid(string s) {

        stack <char> st;

        for(int a = 0 ; a < s.length() ; a++){
            if(s[a] == '('|| s[a] == '['|| s[a] == '{'){
                st.push(s[a]);
            }


        if(st.empty()){
            return false;
        }

            else if(s[a] == ')'|| s[a] == ']'|| s[a] == '}'){
                if(s[a] == ')' && st.top() == '('){
                    st.pop();
                }

                else if(s[a] == '}' && st.top() == '{'){
                    st.pop();
                }

                else if (s[a] == ']' && st.top() == '['){
                    st.pop(); 

                }
                else{
                    return false;
                }
            }

        }
            if(!st.empty()){
                return false;
            }
        return true;
        
    }
};