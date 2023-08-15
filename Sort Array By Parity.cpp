class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        vector<int> vp;
        vector<int> vi;
        vector<int> v3;
        for(int i = 0; i<v.size();i++){         
            if(v[i]%2==0){
                vp.push_back(v[i]);
            }else{
                vi.push_back(v[i]);
            }
        }	
        for(int i = 0; i<vp.size();i++){
            v3.push_back(vp[i]);

        }
        int j = 0;
        for(int i = 0; i<vi.size();i++){
            v3.push_back(vi[i]);
        }
        for(int i = 0; i<v.size();i++){
            v[i] = v3[i];
        }
        return v;
    }
};
