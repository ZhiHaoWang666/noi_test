/*
插入
void insert_sort(int a[],int len){
    if(a == NULL || len <=0){
        return 0;
    }for(int i=0;i<=len;i++){
        int tmp = a[i];
        int j;
        for(j=i-1;i>=0;j--){
            if(a[i]>tmp){
                a[j+1] = a[i];
            }else{
                break;
            }
        }
        a[j+1] = tmp;
    }
}
选择

for(i=0;i<n;i++){
    int k = i;
    for(j=i+1;j<n;j++){
        if(a[k]>a[j]){
            k=j;
        }
    }
    if(k!=i){
        swap(a[k],a[i]);
    }
}
冒泡

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
快排

void qs(int a[],int l,int r){
    if(l>r){
        return;
    }
    int i,j,x;
    i = l;
    j = r;
    x = a[i];
    while(i<j){
        while(i<j&&a[j]>x){
            j--;
        }if(i<j){
            a[i++] = a[j];
        }while(i<j&&a[j]<x){
            i++;
        }if(i<j){
            a[j--] = a[i];
        }
    }
    a[i] = x;
    qs(a,l,i-1);
    qs(a,i+1,r);
}

*/

#include<iostream>
using namespace std;

void qs(int a[],int l,int r){
    if(l>r){
        return;
    }
    int i,j,x;
    i = l;
    j = r;
    x = a[i];

    while(i<j){
        while(i<j&&a[j]>x){
            j--;
        }if(i<j){
            a[i++] = a[j];
        }while(i<j&&a[j]<x){
            i++;
        }if(i<j){
            a[j--] = a[i];
        }
    }
    a[i] = x;
    qs(a,l,i-1);
    qs(a,i+1,r);
}


int main(){
    return 0;
}