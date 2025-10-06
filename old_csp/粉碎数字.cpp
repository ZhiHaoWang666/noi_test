
#include<iostream>
using namespace std;

void insert_sort(int a[],int len){
    if(a == NULL || len<= 0){
        return ;
    }
    for(int i=1;i<=len;i++){
        int j,tmp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>tmp){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = tmp;
    }
}
int a[101],b[101];
int n;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(n>=10){
            while(a[i]!=0){
                b[i] =a[i]%10;
                a[i]/=10;
            }
        }else{
            b[i] = a[i];
        }
    }
    insert_sort(a, n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}
