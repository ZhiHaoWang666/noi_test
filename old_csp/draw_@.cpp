#include<iostream>
#include<iomanip>
using namespace std;
int n,m;
char a;
int pd;
int main(){
    cin >> n >> m;
    cin >> a;
    cin >> pd;
    if(pd == 1){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << a;
            }
            cout << endl;
        }
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    cout << a;
                }else{
                    cout << " ";
                }
            }
        }
    }
    return 0;
}