// #include<iostream>
// using namespace std;
// unsigned long long a[60] = {1,1};
// int main(){
//     int n;
//     cin >> n;
//     for(int i=2; i<=n; i++){
//         a[i] = a[i-1] + a[i-2];
//         cout << a[i] << endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// long long x,y,z;

// int main(){
//     int n;
//     cin >> n;
//     x = 1;
//     y = 1;
//     for(int i = 3;i<=n;i++){
//         z = x+y;
//         x = y;
//         y = z;    
//     }
//     cout << z;
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n,res = 1;
    cin >> n;
    int m[n];
    m[0] = 1;
    for(int i=1;i<=n;i++){
        m[i] = m[i-1]+(i+1);
        res += m[i];
    }  
    cout << res; 
    return 0;
}