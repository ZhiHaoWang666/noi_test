#include<iostream>
using namespace std;
int n;
int main(){
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i]; 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}