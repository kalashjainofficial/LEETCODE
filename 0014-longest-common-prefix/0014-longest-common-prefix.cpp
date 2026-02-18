class Solution {
public:
    string same(string a, string b) {
        string ans = "";

        for (int n = 0; n < a.length(); n++) {
            if (a[n] == b[n]) {
                ans.push_back(a[n]);
            } else {
                break;
            }

        }
            return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size() == 1) {
            return strs[0];
        }

        string ans = same(strs[0], strs[1]);

        if (ans == "") {
            return ans;
        }

        if (strs.size() > 2) {
            for (int a = 2; a < strs.size(); a++) {

                ans = same(ans, strs[a]);

                if (ans == "") {
                    return ans;
                }
            }
        }
        return ans;
    }
};