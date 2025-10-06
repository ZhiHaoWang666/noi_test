//
// Created by 王祉皓 on 2025/10/3.
//
#include<iostream>
using namespace std;
const int N = 1e5;
int n;
int a[N],b[N],c[N];

int solve() {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 注意：c[j] 的值范围是 1 到 N，需要减1作为数组索引
            if (a[i] == b[c[j] - 1]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    // freopen 写法正确
    freopen("xulie.in","r",stdin);
    freopen("xulie.out","w",stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }
    for (int k = 0; k < n; k++) {
        cin >> c[k];
    }
    
    int res = solve();
    cout << res;
    
    // 可选：关闭文件
    fclose(stdin);
    fclose(stdout);
    return 0;
}

