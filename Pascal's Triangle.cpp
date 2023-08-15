class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> m; 
        
        for(int i=0; i<n; i++) {
            vector<int> v;
            for(int j=0; j<=i; j++) v.push_back(1);
            m.push_back(v);
        }
        for(int i=2; i<n; i++) {
            for(int j=1; j<i; j++) {
                m[i][j] = m[i-1][j-1] + m[i-1][j];
            }
        }
        return m;
    }
};
