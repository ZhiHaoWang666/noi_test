//
// Created by 王祉皓 on 2025/10/2.
// 修正版本
//
#include<iostream>
using namespace std;

const int N = 100;
char op[N];
int n;
int cnt = 0; // 初始化计数器

void dfs(int k, int sum, int num, char sign) {
    if (k > n) {
        // 处理最后一个数字
        if (sign == '+') {
            sum += num;
        } else if (sign == '=') {
            sum += num;
        }
        if (sum == 0) {
            cnt++;
        }
        return;
    }
    
    // 情况1：插入空格（数字连接）
    op[k-1] = ' ';
    dfs(k + 1, sum, num * 10 + k, sign);
    
    // 情况2：插入加号
    op[k-1] = '+';
    int newSum = sum;
    if (sign == '+') {
        newSum += num;
    } else if (sign == '=') {
        newSum += num;
    }
    dfs(k + 1, newSum, k, '+');
    
    // 情况3：插入等号
    op[k-1] = '=';
    newSum = sum;
    if (sign == '+') {
        newSum += num;
    } else if (sign == '=') {
        newSum += num;
    }
    dfs(k + 1, newSum, k, '=');
}

int main() {
    cin >> n;
    dfs(2, 0, 1, '+');
    cout << cnt << endl;
    return 0;
}
