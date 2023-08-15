class Solution {
public:
    bool validMountainArray(vector<int>& v) {
        int n = v.size();
        if(n < 3) return false;
        int i = 1;
        while(i < n and v[i] > v[i-1]){
            i++;
        }
        
        if(i == 1 or i == n) return false;
        
        while(i < n and v[i] < v[i-1]){
            i++;
        }
       
        if(i == n) return true;
      
        return false;
    }  
    
};
