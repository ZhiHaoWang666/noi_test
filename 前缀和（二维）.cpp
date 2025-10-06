#include<iostream>
using namespace std;

int a[1010][1010];
int s[1010][1010];
int n,m,q;

int main(){
  cin >> n >> m >> q;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
    }
  }
  while (q--) {
    /* code */
    int x1,x2,y1,y2,sum=0;
    cin >> x1 >> x2 >> y1 >> y2;
    sum=s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
    cout << sum << endl;
  }

return 0;
}
