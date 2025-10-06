#include <iostream>
using namespace std;

const int N = 1e4;

int n;
int l = 0,r = n-1,mid;
int x;
int var[N];


void binary_search(){
    while(l<=r){
        mid = (l + r)/2;
        if(x > var[mid]){
            l = mid + 1;
        }else if(x <= var[mid]){
            r = mid - 1;
        }
    }
    if(var[l] == x){
        cout << l;
    }
    
}

int main(){
    cin >> n;
    cin >> x;
    for(int i=0;i<n;i++){
        cin >> var[i];
    }
    binary_search();
    return 0;
}

/*
游戏逻辑实现
#incldue<game>

int main(){
    init1();
    init2();
    while(true){
        do some if;
        message();
        if(event == quit){
            quit();
            break;
        }
    }
    clean();
    return 0;
}
*/ 
