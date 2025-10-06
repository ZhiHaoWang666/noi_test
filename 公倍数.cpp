//
// Created by 王祉皓 on 2025/10/3.
// 求最小的长度为L的十进制数，是2,3,5,7的公倍数
//
#include<iostream>
using namespace std;

int main() {
    int L;
    cin >> L;
    
    // 特殊情况：L=1时，没有长度为1的数是210的倍数
    if (L == 1) {
        cout << -1 << endl;
        return 0;
    }
    
    // 计算最小的L位数
    long long minNum = 1;
    for (int i = 1; i < L; i++) {
        minNum *= 10;
    }
    
    // 找到第一个大于等于minNum且是210的倍数的数
    long long remainder = minNum % 210;
    long long result = minNum + (210 - remainder) % 210;
    
    // 检查结果是否在L位数范围内
    if (result >= minNum * 10) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}

