#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1010;

int n,r;
int var[N];
int res;

int greedy(){
    sort(var,var+n);
    for(int i=r;i<n;i++){
        var[i] = var[i]+var[i-r];
    }
    for(int i=0;i<n;i++){
        res += var[i];
    }
    return res;
}
                        
int main(){
    cin >> n >> r;
    for(int i=0;i<n;i++){
        cin >> var[i]; 
    }
    greedy();
    cout << res;
    return 0;
}