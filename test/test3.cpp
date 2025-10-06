#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, m;
    int res_a[101],res_b[101];
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int res = binarySearch(a,m);
    for (int i = 0; i < m; i++) {
        if(b[i]<res){
            res_a[i] = b[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]<res){
            res_b[i] = a[i];
        }
    }
    for(int i=0;i<n;i++){
        cout << res_b[i];
    }for(int j=0;j<m;j++){
        cout << res_a[j];
    }
    return 0;
}
