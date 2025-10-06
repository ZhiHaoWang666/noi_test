#include<iostream>
using namespace std;

int main(){
    // int max,min,i,n,a[10];
    // cin >> n;
    // for(int i = 0;i<n;i++){
    //     cin >> a[i];
    // }
    // max = a[0];min = a[0];
    // for(int i=0;i<n;i++){
    //     if (min > a[i]){
    //         min = a[i];
    //     }if(max < a[i]){
    //         max = a[i];
    //     }
    // }
   int n,t,a[20] = {};
   cin >> n;
   for(int i=0;i<n;i++){
    cin >> a[i];   
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            t = a[j] ;
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    return 0;
}