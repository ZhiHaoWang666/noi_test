#include<iostream>
#include<iomanip>
using namespace std;

int n;
int m[25][25];

int main(){
    // int n;
   // cin >> n;
    // for(int i=2;i<=n;i++){
    //     if(n%i==0){
    //         cout << i;
    //         break;
    //     }
    // }   
    // return 0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][i] = 1;
            m[i][n-i-1] = 1;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << setw(3) << m[i][j];    
        }
        cout << endl;
    }
    return 0;
}