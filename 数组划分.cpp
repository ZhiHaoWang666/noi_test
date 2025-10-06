//
// 数组划分问题：第i段的数字之和必须是i的倍数
//
#include<iostream>
#include<vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    // dp[i][j] 表示前i个元素划分为j段的方案数
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));
    
    // 初始化：不划分任何段（0段）的方案数为1
    dp[0][0] = 1;
    
    // 计算前缀和
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }
    
    // 动态规划
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // 尝试将前i个元素划分为j段
            for (int k = j-1; k < i; k++) {
                // 第j段是从k+1到i
                long long sum = prefix[i] - prefix[k];
                
                // 检查第j段的和是否是j的倍数
                if (sum % j == 0) {
                    dp[i][j] = (dp[i][j] + dp[k][j-1]) % MOD;
                }
            }
        }
    }
    
    // 计算所有可能的划分方案数
    long long result = 0;
    for (int j = 1; j <= n; j++) {
        result = (result + dp[n][j]) % MOD;
    }
    
    cout << result << endl;
    
    return 0;
}