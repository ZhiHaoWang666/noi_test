#include<iostream>
using namespace std;

int yue_se_fu_huan(int n,int k){
        int res = 0;
        for(int i = 1;i<=n;i++){
            res = (res + k)% i;
        }
        return res+1;
    }  

int main(){
    // int light;
    // cin >> light;
    // if (light%2 == 0){
    //     cout << "0";
    // }else{
    //     cout << "1";
    // }
    // int n;
    // int res = 0;
    // int nums = 0;
    // cin >> n;
    // for (int i = 0;i<=n;i++){
    //     for(int j = 0;j<=9;j++){
    //         for(int h = 0;h<=9;h++){
    //             nums = i*100+j*10+h;
    //             if(nums % 2 == 1){
    //                 res ++;
    //     }
    //         }
    //     }
    // }
    // cout << res;

    /*
    约瑟夫环排队问题
    int yue_se_fu_huan(int n,int k){
        int res = 0;
        for(int i = 0;i<=n;i++){
            res = (res + k)% i;
        }
        return res+1;
    } 
    */
    /*
    int y, m, d;
    int t_y = 2023, t_m = 5, t_d = 12;
    int res;
    cin >> y >> m >> d;
    if (t_m == m || t_d == d) {
        res = (t_y - y) * 365;
    } else {
    int days = 0;
    if (m == 2) {
        days = 28 + (y % 4 == 0);
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        days = 30;
    } else {
        days = 31;
    }
    res = (t_y - y) * 365 - (t_m - m) * days - (t_d - d);
    }
    cout << res;
*/
    int n;
    cin >> n;
    int m;
    m = 3;
    int nums = yue_se_fu_huan(n,m);
    cout << nums << endl;;   
    return 0;
}