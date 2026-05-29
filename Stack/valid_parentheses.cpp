// 20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        unordered_map<char, char> mp = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char ch : s){

            // opening brackets
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }

            // closing brackets
            else{

                // stack empty OR mismatch
                if(st.empty() || st.top() != mp[ch]){
                    return false; 
                }

                st.pop();
            }
        }

        // valid if stack empty
        return st.empty();
    }
};

// time -> O(n) because we are traversing the string once
// space -> O(n) because in worst case we can have all opening brackets in the stack