class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int maxi=0, indice;
        bool b = true;
        for(int i = 0; i<v.size(); i++){
            if(maxi<v[i]){
                maxi = v[i];
                indice = i;
            }
        }
    
        for(int i = 0; i<v.size(); i++){
            if(maxi < v[i]*2 and v[i]!= maxi){
               b = false;
        
            }
        }
        if(b)return indice;
        else return -1;
    }
};
