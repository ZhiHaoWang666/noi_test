//
// 字符串重复子序列问题：s重复多次使t成为子序列
//
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int n = s.length(); // n = 26
    int m = t.length();
    
    // 统计s中每个字符的出现次数
    vector<int> charCount(26, 0);
    for (char c : s) {
        charCount[c - 'a']++;
    }
    
    // 统计t中每个字符的出现次数
    vector<int> tCharCount(26, 0);
    for (char c : t) {
        tCharCount[c - 'a']++;
    }
    
    // 检查是否所有t中的字符都在s中存在
    for (int i = 0; i < 26; i++) {
        if (tCharCount[i] > 0 && charCount[i] == 0) {
            cout << -1 << endl; // 不可能的情况
            return 0;
        }
    }
    
    // 计算理论最小重复次数（基于字符频率）
    int minRepeats = 0;
    for (int i = 0; i < 26; i++) {
        if (tCharCount[i] > 0) {
            minRepeats = max(minRepeats, (tCharCount[i] + charCount[i] - 1) / charCount[i]);
        }
    }
    
    // 使用while循环实现贪心算法
    int result = 0;
    int tIndex = 0; // t中当前要匹配的字符位置
    
    while (tIndex < m) {
        result++; // 增加一次重复
        int sIndex = 0; // s中当前扫描的位置
        
        // 在当前的s中尽可能多地匹配t中的字符
        while (sIndex < n && tIndex < m) {
            if (s[sIndex] == t[tIndex]) {
                tIndex++; // 匹配成功，移动到t的下一个字符
            }
            sIndex++; // 移动到s的下一个字符
        }
    }
    
    cout << result << endl;
    
    return 0;
}

