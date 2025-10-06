#include<iostream>
using namespace std;

int n;
int main(){
    char a = '*';
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}