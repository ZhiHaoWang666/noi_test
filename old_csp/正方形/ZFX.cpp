#include<iostream>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	bool res;
	res = ((x>=-1&&x<=1)&&(y>=-1&&y<=1));
	switch(res){
		case 0:
			cout << "No";
			break;
		case 1:
			cout  << "Yes";
			break; 
	}	
	
	return 0;
} 
