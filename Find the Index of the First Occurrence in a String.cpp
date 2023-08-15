class Solution {
public:
    int strStr(string s1, string s2) {
        int m = s2.length();
        int n = s1.length();

        for (int s = 0; s<=n-m; s++) {
            for (int i = 0; i<m; i++) {
                if (s2[i] != s1[s+i]) {
                    break;
                }
                if (i == m - 1) {
                    return s;
                }
            }
        }

        return -1;
    }
};
