#include<iostream>
#include<algorithm>
using namespace std;

int Binary_Search(int a[],int size,int key){
  if(a == NULL|| size == 0){
    return -1;
  }
  int low,high;
  low = 0;
  high = size - 1;
  int mid = 0;
  while(low <= high){
    mid = (low+high)/2;
    if(a[mid]<key){
      low = mid+1;
    }else if(a[mid]>key){
      high = mid -1;
    }else{
      return mid;
    }
  }
  return -1;
}

int a[101];
int n,s;
int res;

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  cin >> s;
  sort(a,a+n+1);
  res = Binary_Search(a,n,s);
  cout << res;
  return 0;
}
