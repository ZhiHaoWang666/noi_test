#include<iostream>
#define N 5
using namespace std;

int n;
int var[N];

void solve(ll n, int &y, int &m, int &d) {
	bool flag;
	if (n<1721424+577737) { 
		y=n/365.25;
		n-=y*365+(y+3)/4; 
		flag=y%4==0;
		y+=-4713;
		if (y>=0) y++; 
	} else { 
		n-=1721426-366;
		int y0=n/146097*400;
		n%=146097;
		y=n/365.25;
		n-=y*365ll+(y+3)/4-(y+99)/100+(y+399)/400;
		flag=y%400==0 || y%4==0 && y%100!=0;
		y+=y0;
        if (n>=365+flag) n-=365+flag, y++; 
	}
	if (!flag && n>=59) n++;
	m=todate[n][0]+1, d=todate[n][1]+1;
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> var[i];
	}
	return 0;
}