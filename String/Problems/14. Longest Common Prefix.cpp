class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        string ans = "";
        for(int i=0; i<s[0].size(); i++){

            char temp = s[0][i];
            for(int j=1; j<s.size(); j++){
                if(s[j][i] != temp || i>=s[j].size()){
                    return ans;
                }
            }
            ans += temp;
        }

        return ans;
        
    }
};
