#include<iostream>
#include<iomanip>
using namespace std;

int n;
int main(){
    cin >> n;
    char a = '*';
    for(int i=0;i<n;i++){
        for(int j=n;j>=0;j--){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}