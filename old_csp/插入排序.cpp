#include<iostream>
using namespace std;
void insert_sort(int a[],int len){
    if(a == NULL || len <=0){
        return;
    }
    for(int i=1;i<=len;i++){
        int tmp = a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(a[i]>tmp){
                a[j+1] = a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = tmp;
    }
}
int var[101];
int n;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> var[i];
    }
    insert_sort(var,n-1);
    for(int i=0;i<n;i++){
        cout << " " << var[i];
    }
    return 0;
}