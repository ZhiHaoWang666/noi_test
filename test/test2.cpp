#include<iostream>
using namespace std;

bool Search(int n,int k){
    if(k%2 == 0){
        if(n % 2 == 0){
            return true;
        }else{
            return false;
        }
    }else{
        if(n>=k&&n%2 == k % 2){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >> k;

        if(Search(n,k)){
            cout << "Y";
        }else{
            cout << "NO";
        }
    }
    return 0;
}