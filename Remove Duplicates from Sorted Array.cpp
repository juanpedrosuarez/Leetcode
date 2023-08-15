class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        if(v.size() <= 1){
            return v.size();
        }

        int s = 0;

        for(int i = 1; i<v.size(); i++){
            if(v[i] != v[s]){
                s++;
                v[s] = v[i];
            }
        }

        return s + 1;
    }
};
