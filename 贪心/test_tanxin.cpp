#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e4;

int n,m;
int var[N];
int s;
int res;

void pop(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(var[i]<var[i+1]){ 
                swap(var[i],var[i+1]);
        }
        }
    }
}

int solve(){
    pop();
    for(int i=0;i<n;i++){
        s += var[i];
        if(s>=m){
            res = i+1;
            break;
        }
    }
    return res;
}

int main(){
    cin >> m >> n;
    for(int i=0;i<n;i++){
        cin >> var[i];
    }
    solve();
    cout << res << endl;;
    return 0;
}