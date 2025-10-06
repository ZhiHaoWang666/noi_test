#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int res = 0;
    int gold_h = 0;
    cin >> count;
    int m[count*3];
    for(int i = 1;i<=count*3;i++){
        cin >> m[i];
        res += m[i];
    }
    gold_h = m[count*3] + m[count*3-2];
    while(m[count*3-2]<2){ 
        m[count*3-2] += gold_h;
    }
    cout << res <<" "<< gold_h;
    return 0;
}