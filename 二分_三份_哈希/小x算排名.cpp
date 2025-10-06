#include<iostream>
using namespace std;

const int N = 1e5;

int n;
int x;
int var[N];
int l = 0,r = n-1,mid;

void pop(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(var[j]<var[j+1]){
                swap(var[i],var[i+1]);
            }
        }
    }
}

void binary_search(){
    while(l<=r){
        mid = (l+r)/2;
        if(x>var[mid]){
            l = mid + 1;
        }else if(x<= var[mid]){
            r = mid - 1;
        }
    }
}


int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> var[i];
    }

    return 0;

}