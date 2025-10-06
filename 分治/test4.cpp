#include<iostream>
#include<algorithm>
using namespace std;

const int N = 101;

int Binary_Search(int a[],int size,int key){
  if(a == NULL ||size == 0){
    return -1;
  }
  int low ,high;
  low = 0;
  high = size - 1;
  int mid = 0;
  while(low <= high){
    if(a[mid]<key){
      low = mid + 1;
    }else if(a[mid]> key){
      high = mid - 1;
    }else{
      return mid;
    }
  }
  return -1;
}

int n;
int a[N];
int q;
int nums[N];
int res[N];
int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  cin >> q;
  for(int j=0;j<q;j++){
    cin >> nums[q];
  }
  sort(a,a+n+1);
  for(int k=0;k<q;k++){
    res[k] = Binary_Search(a,n,nums[k]);
  }
  for(int i=0;i<q;i++){
    cout << res[i];
  }
  return 0;
}
