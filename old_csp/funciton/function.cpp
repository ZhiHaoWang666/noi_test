#include<iostream>
using namespace std;

int main(){
	double x,y,t;
	cin >> x;
	t = int(x)/5.0;
	
	switch(int(t)){
		case 0:
			y = (-x)+2.5;
			break;
		case 1:
			y = 2-1.5*(x-3)*(x-3);
			break;
		case 2:
		case 3:
			y = x/2-1.5;
			break;
		
	}
	cout << y << endl;
	
	return 0;
}
