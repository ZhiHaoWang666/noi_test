#include<iostream>  
using namespace std;  
#define mod 998244353  
#define ll long long  
  
int n;  
vector<int> w; // 点权  
vector<vector<int>> g; // 邻接表表示的树结构  
  
// 计算以i为根的子树的连通块数量和异或和  
pair<int, int> dfs1(int i) {  
    pair<int, int> res = {1, w[i]};  
    for (int j : g[i]) {  
        auto [c, x] = dfs1(j);  
        res.first += c;  
        res.second ^= x;  
    }  
    return res;  
}  
  
// 计算删除边的方案的权值之和  
int dfs2(int i, int cnt) {  
    if (cnt == -1) return 1; // 没有边可删，返回1  
    if (cnt == 0) return 0; // 已经删完了所有边，返回0  
    int sum = 0;  
    for (int j : g[i]) {  
        auto [c, x] = dfs1(j); // 获取以j为根的子树的连通块数量和异或和  
        if (c > 1) sum = (sum + x * dfs2(j, cnt - 1)) % mod; // 如果连通块数量大于1，可以删除边i->j，加入权值之和  
    }  
    return sum;  
}  
  
int main() {  
    cin >> n;  
    for (int i = 0; i < n; i++) {  
        cin >> w[i];  
    }  
    for (int i = 0; i < n - 1; i++) {  
        int f;  
        cin >> f;  
        g[f].push_back(i); // 将i加入到f的子节点中，g是邻接表表示的树结构  
    }  
    int ans = 0;  
    for (int i = 0; i < n - 1; i++) { // 对于每一条边，计算删除该边的方案的权值之和并累加到答案中  
        auto [c, x] = dfs1(i); // 获取以i为根的子树的连通块数量和异或和  
        ans = (ans + x * dfs2(i, c - 1)) % mod; // 计算删除该边的方案的权值之和并累加到答案中  
    }  
    cout << ans << endl; // 输出答案  
    return 0;  
}