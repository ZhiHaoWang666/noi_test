#include<iostream>
#include<set>
using namespace std;

const int N = 1e3;

int n;
int a1[N];
int b2[N];
int c3[N];

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a1[i];
        cin >> b2[i];
        cin >> c3[i];
    }
    int p = 0;
    int m;
    cin >> p;
    set<int> s;
    for(int i=0;i<p;i++){
        cin >> m;
        s.insert(m);
    }
    
    return 0;
}
