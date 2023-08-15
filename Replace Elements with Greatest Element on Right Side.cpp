class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
                 int rep = -1;
         int n = arr.size();
         for(int i = n - 1; i >= 0; i--){
            int temp = rep;
            rep = max(rep, arr[i]);
            arr[i] = temp;
         }
         return arr;
    }
};
