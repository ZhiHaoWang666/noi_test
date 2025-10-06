#include<iostream>
using namespace std;

int n;
int main(){
    cin >> n;
    int var[n];
    for(int i=0;i<n;i++){
        cin >> var[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<0;j++){
            if(var[j]>var[j+1]){
                swap(var[j],var[j+1]);
            }
        }
    }
    return 0;
}