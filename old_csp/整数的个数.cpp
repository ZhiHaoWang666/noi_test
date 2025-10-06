// #include<iostream>
// using namespace std;

// int main(){
// 	int const int n = 10
// 	int m[n];
// 	int pare_one = 0,pare_ten = 0,pare_five = 0;
// 	cin >> n;
// 	for(int i = 0;i<=n;i++){
// 		cin >> m[i];
// 		for(int j = 0;j<=n;j++){
// 			if(m[i] == 1){
// 				pare_one ++;
// 			}if(m[i] == 5){
// 				pare_five ++;
// 			}if(m[i] == 10){
// 				pare_ten ++;
// 			}
// 		}
// 	}
// 	cout << pare_ten << pare_five << pare_one;
// 	return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    int nums[101];
    int count1 = 0, count5 = 0, count10 = 0;

    for (int i = 0; i < k; i++) {
        std::cin >> nums[i];
        switch (nums[i]) {
            case 1:
                count1++;
                break;
            case 5:
                count5++;
                break;
            case 10:
                count10++;
                break;
            default:
                break;
        }
    }

    cout << count1 << count5 << count10 <<endl;

    return 0;
}
