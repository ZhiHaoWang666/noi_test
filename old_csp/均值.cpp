// #include<iostream>
// using namespace std;

// int main(){
// 	int m;
// 	double s[101];
// 	double res;
// 	double res_l;
// 	cin >> m;
// 	for(int i = 0;i<=m;i++){
// 		cin >> s[i];
// 		res += s[i];
// 	}
// 	res_l = res/m;
// 	cout << res_l; 
// 	return 0;
// }
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "请输入样本数据的个数: ";
    cin >> n;

    double nums[n];
    for (int i = 0; i < n; i++) {
        cout << "请输入第" << i + 1 << "个浮点数: ";
        cin >> nums[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    double avg = sum / n;
    cout << "均值为: " << fixed << setprecision(4) << avg << endl;

    return 0;
}