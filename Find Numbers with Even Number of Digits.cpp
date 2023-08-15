int d(int n) {
   int s = 0;
   if(n == 0) {
       return 1;
   }
   while (n > 0) {
       s++;
       n /= 10;
   }
   return s;
}

class Solution {
public:
    int findNumbers(vector<int>& v) {
        int np=0;
        for(int i = 0; i<v.size(); i++){
            if(d(v[i])%2==0){
                np++;
            }
        }
        return np;
        
    
        
    }
};
