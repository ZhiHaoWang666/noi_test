#include<iostream>
using namespace std;

int main(){
    int m;
    cin >> m;
    int n[m];

    for(int i=1;i<=m;i++){
        cin >> n[i];
        /*if(n[i]>n[i-1]){
        }*/
        cout << n[i] << endl;
    }
    
    return 0;
}