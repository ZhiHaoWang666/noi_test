#include<iostream>
using namespace std;

void insert_sort(int a[],int len){
    if(a == NULL || len <=0){
        return;
    }
    for(int i=1;i<len;i++){
        int tmp = a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(a[i]>tmp){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = tmp;
    }
}

int a[101];
int n,res,res_last;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    //调用函数
    insert_sort(a, n);
    for(int i=0;i<5;i++){
        res = a[i]+a[i+1];
    }
    res_last = res / 5;
    cout << res_last;
    return 0;
}
