//
// Created by 王祉皓 on 2025/10/2.
// 统计满足 A[i] = B[C[j]] 的整数对 (i,j) 的数量
//
#include<iostream>
using namespace std;

const int MAXN = 1005;
int A[MAXN], B[MAXN], C[MAXN];

int main() {
    int n;
    cin >> n;
    
    // 读取序列 A
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    
    // 读取序列 B
    for (int i = 1; i <= n; i++) {
        cin >> B[i];
    }
    
    // 读取序列 C
    for (int i = 1; i <= n; i++) {
        cin >> C[i];
    }
    
    int cnt = 0;
    
    // 枚举所有可能的 (i, j) 对
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i] == B[C[j]]) {
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}

