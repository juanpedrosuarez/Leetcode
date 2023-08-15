class Solution {
public:
    int removeElement(vector<int>& v, int val) {
        int s=0;
        for(int i = 0; i<v.size();i++){
            if(v[i]!=val){
                v[s++] = v[i];
                
            } 
            
        }
        
        return s;
        
    }
};
