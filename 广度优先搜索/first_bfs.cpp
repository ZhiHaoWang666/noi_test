#include<iostream>
#include<queue>
#include<vector>
using namespace std;
//bfs
//广度（宽）
/*空间复杂度 o(h)->dfs (h为树高  递归的最大层数)
    o(2^h)->bfs (2为每次分出来的枝数量（只针对于二叉树）)
    注意:这里讲的是空间复杂度*/

void bfs(vector<vector<int>>& adjList, vector<bool>& visited, int start){
    queue<int> q;
    q.push(start);

    visited[start] = 1;

    while(!q.empty()){
        int current = q.front();
        q.pop();
        cout << current << " ";
        for(int neighbor : adjList[current]){
            if(!visited[neighbor]){
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
}  
int main(){
    vector<vector<int>> adjList= {{1, 2}, {0, 3}, {0, 4, 5}, {3}, {3, 6}, {3, 7}, {4}};
    vector<bool> visited(adjList.size(), 0);

    bfs(adjList, visited, 0);
    
    return 0;
}