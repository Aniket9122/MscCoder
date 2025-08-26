#include <vector>
#include <queue>
#include <map>
using namespace std;

struct Cell {
    int x, y, val;
    long long sum;
    bool operator<(const Cell& a) const { return sum > a.sum; }
};

int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};

vector<int> minPath(vector<vector<int>> grid, int k) {
    priority_queue<Cell> pq;
    map<pair<int, int>, long long> mp;
    vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
    
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            pq.push({i, j, grid[i][j], grid[i][j]});
         }
     }
    
    while (!pq.empty()) {
        Cell cur = pq.top();
        pq.pop();
        
        if (vis[cur.x][cur.y]) continue;
        vis[cur.x][cur.y] = true;
        
        if (mp.size() == k) break;
        mp[{cur.x, cur.y}] = cur.sum;
        
        for (int i = 0; i < 4; ++i) {
            int nx = cur.x + dx[i], ny = cur.y + dy[i];
            
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && !vis[nx][ny]) {
                pq.push({nx, ny, grid[nx][ny], cur.sum + grid[nx][ny]});
             }
         }
     }
    
    vector<int> res;
    for (auto& it : mp) {
        res.push_back(grid[it.first.first][it.first.second]);
     }
    
    return res;
}