// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     int res = 0;
// //     int nums = 0;
// //     cin >> n;
// //     for (int i = 0;i<=n;i++){
// //         for(int j = 0;j>=9;j++){
// //             for(int h = 0;h>=9;h++){
// //                 nums = i*100+j*10+h;
// //                 if(nums % 2 == 1){
// //                     res ++;
// //         }
// //             }
// //         }
// //     }
// //     cout << res;
// //     return 0;
// // }

// //约瑟夫环方法1
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // // 函数：求解约瑟夫环
// // int josephus(int n, int k) {
// //     vector<int> nums(n, 0);  // 存储所有人的编号
// //     for (int i = 0; i < n; i++) {
// //         nums[i] = i + 1;
// //     }

// //     int cur = 0;  // 当前队列中第一个人的位置
// //     while (nums.size() > 1) {  // 只剩下一个人时停止循环
// //         // 第k个人离开队列，更新队列
// //         cur = (cur + k - 1) % nums.size();
// //         nums.erase(nums.begin() + cur);

// //         // 当前队列中第一个人的位置
// //         cur %= nums.size();
// //     }
// //     return nums[0];
// // }

// // int main() {
// //     int n = 0;
// //     cin >> n;  // 环中人数
// //     int k = 3;   // 数到第k个人时出环
// //     int res = josephus(n, k);
// //     cout  << res << endl;

// //     return 0;
// // }

// //约瑟夫环方法2
// #include <iostream>
// using namespace std;

// // 函数：求解约瑟夫环
// int josephus(int n, int k) {
//     int res = 0;
//     for (int i = 2; i <= n; i++) {
//         res = (res + k) % i;
//     }
//     return res + 1;
// }

// int main() {
//     int n = 0;
//     cin >> n;  // 环中人数
//     int k = 3;   // 数到第k个人时出环
//     int res = josephus(n, k);
//     cout << res << endl;

//     return 0;
// }


// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     int n;
//     int x = 1;
//     cin >> n;
//     int var[n][n];

//     for(int i = 0;i<n;i++){
//         for(int j = n-1;j>=0;j--){
//             var[i][j] = x;
//             var[j][i] = x;
//         }
//         x++;
//     }
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout <<setw(3)<< var[i][j];	
// 		}
// 		cout<<endl;
// 	}
//     return 0;
// }

#include<iostream>
using namespace std;

int a[4][4];

int main(){
    for(int i = 1;i<=4;i++){
        for(int j = 1;j<=4;j++){
            if(i==1||j==1){
                a[i][j] = 1;
            }
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    cout << a[4][4];
    return 0;
}
