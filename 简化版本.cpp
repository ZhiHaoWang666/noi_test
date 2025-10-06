//
// Created by 王祉皓 on 2025/10/2.
//
#include<iostream>
#include<string>
using namespace std;

string s;
int cnt = 0;

// 计算表达式的值
int calc(string str) {
    int sum = 0, num = 0;
    for (char c : str) {
        if (c == '+') {
            sum += num;
            num = 0;
        } else {
            num = num * 10 + (c - '0');
        }
    }
    return sum + num;
}

// 生成所有可能的表达式
void dfs(string str, int pos, vector<string>& v) {
    if (pos >= str.length()) {
        v.push_back(str);
        return;
    }
    dfs(str, pos + 1, v);
    if (pos < str.length() - 1) {
        string newStr = str.substr(0, pos + 1) + "+" + str.substr(pos + 1);
        dfs(newStr, pos + 2, v);
    }
}

int main() {
    cin >> s;
    
    for (int i = 1; i < s.length(); i++) {
        string left = s.substr(0, i);
        string right = s.substr(i);
        
        vector<string> leftExpr, rightExpr;
        dfs(left, 0, leftExpr);
        dfs(right, 0, rightExpr);
        
        for (string l : leftExpr) {
            for (string r : rightExpr) {
                if (calc(l) == calc(r)) cnt++;
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}
