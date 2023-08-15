class Solution {
public:
    int numIslands(vector<vector<char>>& ma) {
        int n = ma.size();int m= ma[0].size();
        int ni = 0;
	vector<vector<bool>> vis(n,vector<bool>(m, false));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(ma[i][j] == '1' and !vis[i][j]){
				bfs(i,j,ma,n,m,vis);
				ni++;
			}
		}
	}return ni;
    }
    void bfs(int i, int j, vector<vector<char>> &ma,int n, int m, vector<vector<bool>> &vis){
	queue<pair<int, int>> f;
	f.push({i,j});
	vis[i][j] = true;
	
	while(!f.empty()){
		pair<int, int> atual = f.front();
		int i = atual.first;
		int j = atual.second;
		f.pop();
		//visitando os vizinhos
		vector<pair<int,int>> nei;
		
		if(i-1>=0 and ma[i-1][j] == '1'){
			nei.push_back({i-1,j});
		}
		if(i+1<n and ma[i+1][j] =='1'){
			nei.push_back({i+1,j});
		}
		if(j-1>=0 and ma[i][j-1] == '1'){
			nei.push_back({i,j-1});
		}
		if(j+1<m and ma[i][j+1] == '1'){
			nei.push_back({i,j+1});
		}
		
		for(pair<int,int>ne: nei){
			if(!vis[ne.first][ne.second]){
				vis[ne.first][ne.second] = true;
				f.push(ne);
			}
		}
		
		
		
	
	}
	
	
	
}

};
