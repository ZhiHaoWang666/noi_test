#include <iostream>  
#include <queue>  
using namespace std;  
  
const int N = 110;  
int n, m;  
char map[N][N];  
int dx[5] = {0, 0, 1, 0, -1};  
int dy[5] = {0, 1, 0, -1, 0};  
  
void bfs() {  
    queue<pair<int, int>> q;  // 使用std::queue  
    q.push({1, 1});            // 将起点入队  
    map[1][1] = '#';           // 标记起点为已访问  
    int pathLength = 0;         // 最短路径长度  
  
    while (!q.empty()) {  
        int size = q.size();     // 当前层的节点数量  
        for (int i = 0; i < size; i++) {  
            auto [x, y] = q.front(); // 获取队首元素  
            q.pop();                // 出队  
            map[x][y] = '#';         // 标记为已访问  
  
            if (map[x][y] == 'T') { // 到达终点  
                pathLength = i + 1; // 最短路径长度等于当前层数加1（考虑起点）  
                break;             // 结束BFS，因为已经找到最短路径  
            }  
  
            for (int j = 0; j < 5; j++) { // 遍历上下左右和当前位置  
                int nx = x + dx[j];  
                int ny = y + dy[j];  
                if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && map[nx][ny] == '.') { // 如果新位置在地图范围内且未被访问过  
                    q.push({nx, ny}); // 入队新位置  
                }  
            }  
        }  
    }  
    cout << "最短路径长度: " << pathLength << endl; // 输出最短路径长度  
}  
  
int main() {  
    cin >> n >> m;  
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= m; j++) {  
            cin >> map[i][j];  
        }  
    }  
    bfs(); // 执行BFS算法  
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= m; j++) {  
            cout << map[i][j] << " "; // 输出最终的地图（起点和终点之间最短路径）  
        }  
        cout << endl;  
    }  
    return 0;  
}