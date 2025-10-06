// 三桶问题：给定容量 A, B, C。初始 (0,0,C)。
// 倒水直到一个桶满或另一个空，求所有 a==0 时 c 的可能值，升序输出。

#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

struct State { int a,b,c; };

int main(){
    int A,B,C; 
    if(!(cin >> A >> B >> C)) return 0;

    // 访问标记：a,b 唯一决定 c (c = C - a - b)
    static bool vis[21][21];
    memset(vis,false,sizeof vis);

    vector<bool> possibleC(21,false);

    queue<State> q;
    q.push({0,0,C});
    vis[0][0] = true;

    auto pour = [](int from, int to, int capTo){
        int move = min(from, capTo - to);
        from -= move; to += move;
        return pair<int,int>(from,to);
    };

    while(!q.empty()){
        State s = q.front(); q.pop();
        if(s.a == 0) possibleC[s.c] = true;

        // 六种倒法：A->B, A->C, B->A, B->C, C->A, C->B
        // A -> B
        {
            auto p = pour(s.a, s.b, B);
            State t = {p.first, p.second, s.c};
            if(!vis[t.a][t.b]){ vis[t.a][t.b]=true; q.push(t);}    
        }
        // A -> C
        {
            auto p = pour(s.a, s.c, C);
            State t = {p.first, s.b, p.second};
            if(!vis[t.a][t.b]){ vis[t.a][t.b]=true; q.push(t);}    
        }
        // B -> A
        {
            auto p = pour(s.b, s.a, A);
            State t = {p.second, p.first, s.c};
            if(!vis[t.a][t.b]){ vis[t.a][t.b]=true; q.push(t);}    
        }
        // B -> C
        {
            auto p = pour(s.b, s.c, C);
            State t = {s.a, p.first, p.second};
            if(!vis[t.a][t.b]){ vis[t.a][t.b]=true; q.push(t);}    
        }
        // C -> A
        {
            auto p = pour(s.c, s.a, A);
            State t = {p.second, s.b, p.first};
            if(!vis[t.a][t.b]){ vis[t.a][t.b]=true; q.push(t);}    
        }
        // C -> B
        {
            auto p = pour(s.c, s.b, B);
            State t = {s.a, p.second, p.first};
            if(!vis[t.a][t.b]){ vis[t.a][t.b]=true; q.push(t);}    
        }
    }

    bool first = true;
    for(int c=0;c<=C;c++) if(possibleC[c]){
        if(!first) cout << ' ';
        first = false;
        cout << c;
    }
    if(!first) cout << '\n';
    return 0;
}



