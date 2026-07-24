// using two-pointer -- O(n)
class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for(int end = 0; end<=s.length(); end++){
            if(s[end] == ' '  || end == s.length()){
                reverse(s.begin()+start, s.begin()+end);
                    start = end + 1;
            }
        }

        return s;
    }    
};


// using stack --O(n)

class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        stack<char> st;

        for(int i=0; i<s.length(); i++){
            if(s[i] != ' '){
                st.push(s[i]);
            }
            else{
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                ans += ' ';
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;

    }
};
