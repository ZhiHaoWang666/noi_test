#include<iostream>
using namespace std;

const int N = 1010;
int n,m,q,a[N][N],b[N][N];

int main(){
  cin >> n >> m >> q;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin >> a[i][j];
    }
  }
  while (q--) {
    /* code */
    int x,y,xx,yy,c;
    cin >> x >>   y >> xx >> yy >> c;
    b[x][y]+=c;
    b[xx+1][y] -= c;
    b[x][yy+1] -= c;
    b[xx+1][yy+1] += c;

  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      a[i][j]=(a[i-1][j]+a[i][j-1]-a[i-1][j-1]+b[i][j])+a[i][j];
      cout << a[i][j] <<endl;
    }
  }
}
