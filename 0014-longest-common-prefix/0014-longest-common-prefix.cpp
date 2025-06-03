class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = strs[0].length();
        for (string s : strs) {
            if (s == "")
                return "";
            if (s.length() < min) {
                min = s.length();
            }
        }
        // cout<<min<<'\n';
        string result = "";
        bool stop = true;
        for (int i = 0; i < min && stop; i++) {
            char current_char = strs[0][i];
            for (int j = 0; j < strs.size() && stop; j++) {
                if (strs[j][i] != current_char) {
                    stop = false;
                }
            }
            if (stop)
                result += (current_char);
        }
        return result;
    }
};

