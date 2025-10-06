#include<iostream>
#include<vector>
using namespace std;
#define V 205
#define N 35
#define T 15
int dp[N][V], w[N], c[N];
vector<int> g[T];
int main()
{
    int v, n, t, p;
    cin >> v >> n >> t;
    for(int i = 1; i <= n; ++i)
    {
        cin >> w[i] >> c[i] >> p;
        g[p].push_back(i);
    }
    for(int i = 1; i <= t; ++i)
    {
        for(int j = 0; j <= v; ++j)
        {
            dp[i][j] = dp[i-1][j];
            for(int k = 0; k < g[i].size(); ++k)
            {
                int x = g[i][k];
                if(w[x] <= j)
                    dp[i][j] = max(dp[i][j], dp[i-1][j-w[x]]+c[x]);
            }
        }
    }
    cout << dp[t][v];
    return 0;
}
