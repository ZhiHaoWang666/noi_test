#include<iostream>
using namespace std;
const int N = 10001;
struct Point{
  int x;
  int y;
};
int main(){
  int n;Point var[N];
  int x,y;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    Point p1;
    p1.x = x;
    p1.y = y;
    var[i] = p1;
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<n-1-i;j++){
          if(var[j].x>var[j+1].x){
              swap(var[j],var[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
      cout << var[i].x << " "<< var[i].y;
    }

  return 0;
}
