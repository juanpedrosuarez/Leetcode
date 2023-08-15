class Solution {
public:
    void moveZeroes(vector<int>& v) {
        //Input: nums = [0,1,0,3,12]
        //Output: [1,3,12,0,0]    
        int zero =0;
        vector<int> v2;
        for(int i = 0; i<v.size();i++){         
            if(v[i]==0){
                zero++;		
            }
        }	
        for(int i = 0; i<v.size();i++){         
            if(v[i]!=0){
                v2.push_back(v[i]);
            }
        }
        for(int i = v2.size(); i<v.size()+zero;i++){
            v2.push_back(0);
        }
        for(int i = 0; i<v.size();i++){
            v[i] = v2[i];
        }
    }
};
