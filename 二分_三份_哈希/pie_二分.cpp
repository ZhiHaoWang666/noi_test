#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;
typedef long long ll;
#define eps 1e-6
#define PI 3.14159265358
const int maxn = 1e5+5;
double s[maxn];

int main(){
    double maxsize;
    int m;
    int n, f;
    cin >> m;
    for(int i=0; i<m; i++){
        maxsize = 0.0;
        cin >> n >> f;
        f += 1;
        for(int i=0; i<n; i++){
            cin >> s[i];
            s[i] = s[i] * s[i] * PI;
            maxsize = max(maxsize, s[i]);
        }

        double left = 0.0, right = maxsize;
        double mid, ans = 0.0;
        int num;
        while(right - left > eps){
            mid = (left + right) / 2;
            num = 0;
            for(int i=0; i<n; i++) num += (int)(s[i] / mid);
            if(num >= f) {ans = mid; left = mid;}
            else right = mid; 
        }
        printf("%.4f\n", ans);
    }

}
