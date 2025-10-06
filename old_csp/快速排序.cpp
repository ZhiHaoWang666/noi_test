//
//  快速排序.cpp
//  study_cpp
//
//  Created by 王祉皓 on 2023/7/27.
//

#include<iostream>
using namespace std;

void quick_sort(int a[],int l,int r){
    if(l>r){
        return;
    }
    int i,j,x;
    i = l;
    j = r;
    x = a[i];
    while (i<j) {
        while (i<j&&a[j]>x) {
            j--;
        }if(i<j){
            a[i++]=a[j];
        }
        while (i<j&&a[j]<x) {
            i++;
        }
        if(i<j){
            a[j--] = a[i];
        }
    }
    a[i] = x;
    quick_sort(a, l, i-1);
    quick_sort(a, i+1, r);
}


int a[101],n;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    quick_sort(a, 0, n-1);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}
