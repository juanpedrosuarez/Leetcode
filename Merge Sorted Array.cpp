class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
       int p1 = m-1, p2 = n-1, i = m+n-1;
        while(p2 >= 0){
            if(p1 >= 0 and v1[p1] > v2[p2]){
                v1[i--] = v1[p1--];
            }
            else {
                v1[i--] = v2[p2--];
            }
        }
        
    }
    
};
