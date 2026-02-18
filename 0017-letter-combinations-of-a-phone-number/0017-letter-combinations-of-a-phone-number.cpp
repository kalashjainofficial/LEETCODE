class Solution {
    void solve(string digits, string map[], int index, string output, vector<string>& ans) {
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = map[number];

        for (int a = 0; a < value.length(); a++) {
            output.push_back(value[a]);                  // choose
            solve(digits, map, index + 1, output, ans); // explore
            output.pop_back();                           // backtrack
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }

        string map[10] = {
            "",    // 0 has no mapping
            "",    // 1 has no mapping
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs",// 7
            "tuv", // 8
            "wxyz" // 9
        };

        string output;
        int index = 0;
        solve(digits, map, index, output, ans);
        return ans;
    }
};
