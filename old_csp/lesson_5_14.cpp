#include<iostream>
#include<iomanip>
using namespace std;

//int var[101] = {};
int main(){
    // for(int i = 0;i<101;i++){
    //     cin >> var[i];
    // }
    // int x,n = 0;
    // while (scanf("%d",&x)==1)
    // {
    //     /* code */
    //     var[n++] = x;
    // }
    // for(int i = n-1;i>=1;--i){
    //     cout << var[i];
    // }
    // int n[10] = {};
    // int s = 0,res;
    // cin >> s;

    // for(int i = 0;i<10;i++){
    //     cin >> n[i];
    // }
    
    // for(int j = 0;j<10;j++){
    //     if(n[j] < s){
    //         res ++;
    //     }
    // }
    // cout << res;

    int n,childen,man,men,older;
    cin >> n;
    int m[n];

    for(int i = 0;i<n;i++){
        cin >> m[i];
    }
    for(int j=0;j<n;j++){
        if(m[j] >= 0 && m[j]<=18){
            childen ++;
        }else if(m[j]>=19 && m[j]<= 35){
            man ++;
        }else if(m[j] >= 36 && m[j]<= 61){
            men ++;
        }else if(m[j]>61){
            older ++;
        }
    }
    int res1,res2,res3,res4;

    res1 = childen * 0.1;
    res2 = man * 0.1;
    res3 = men * 0.1;
    res4 = older * 0.1;
    cout << res1*10<<"%";
    cout << res2*10 << "%";
    cout << res3*10 << "%";
    cout << res4*10 << "%";
    return 0;
}