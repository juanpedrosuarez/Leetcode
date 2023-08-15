class Solution {
public:
    bool checkIfExist(vector<int>& v) {
        int n = v.size();
        
        for(int  i = 0; i<n; i++){
            for(int  j = 0; j<n; j++){
                if(i!=j){
                    
                        if(v[i]==2*v[j]){
                            return true;
                        }
                    
                }
                
            }
        }
        return false;
    }
};
