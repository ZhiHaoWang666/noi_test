#include<iostream>
#include<iomanip>
using namespace std;

int n;

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||j==n-i-1){
                cout << setw(3) << 1;
            }else {
                cout << setw(3) << 0;
            }
        }
        cout << endl;
    }
    return 0;
}