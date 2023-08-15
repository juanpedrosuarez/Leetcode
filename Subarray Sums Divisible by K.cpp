class Solution {
public:
int mod(int x, int y){
	return (y + x%y) % y;
}
int subarraysDivByK(vector<int>& nums, int k) {
	map<int, int> frequencia;
	int sr = 0;
	frequencia[0] = 1;
	int resposta = 0;
	
	for(int num: nums){
		sr += num;
		resposta += frequencia[mod(sr, k)];
		frequencia[mod(sr, k)]++;
	}
	
	return resposta;
}

};
