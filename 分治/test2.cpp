#include<iostream>
#include<algorithm>
using namespace std;

int Binary_Search(int a[],int size,int key){
  if(a == NULL || size == 0){
    return -1;
  }
  int low;int high;
  low = 0;
  high = size -1;
  int mid = 0;
  while(low <= high){
    mid = (low+high)/2;
    if(a[mid]<key){
      low = mid+1;
    }else if(a[mid]>key){
      high = mid-1;
    }else{
      return mid;
    }
  }
  return -1;
}

int n;
int var[101],num[101];
int q;
int res[101];
int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> var[i];
  }
  sort(var,var+n+1);
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> num[i];
  }
  for(int i=0;i<q;i++){
    res[i] = Binary_Search(var,n,num[i]);
  }
  for(int i=0;i<n;i++){
    cout << res[i];
  }
  return 0;
}
