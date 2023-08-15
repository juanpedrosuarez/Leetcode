class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> p;
        int x=0;
        for(int i = 0; i<h.size();i++){         
            p.push_back(h[i]);
        }
        sort(p.begin(),p.end());
        for(int i = 0; i<h.size();i++){
            if(h[i]!=p[i]){
                x++;
            }
        }
        return x;
    }
};
