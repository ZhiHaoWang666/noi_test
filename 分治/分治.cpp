#include<iostream>
#include<algorithm>
using namespace std;

int Binary_Search(int var[],int size,int key){
  if(var == NULL|| size == 0){
    return -1;
  }
  int low;int high;
  low = 0;
  high = size-1;
  int mid = 0;
  while(low<=high){
    mid = (low+high)/2;
    if(var[mid]<key){
      low  =  mid + 1;
    }else if(var[mid]>key){
      high = mid - 1;
    }else{
      return mid;
    }
  }
  return -1;
}
int var[101];
int n,s;
int res;
int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> var[i];
  }
  cin >> s;
  sort(var,var+n);
  res = Binary_Search(var,n,s);
  cout << res;
  return 0;
}
