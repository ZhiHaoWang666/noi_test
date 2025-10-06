#include<iostream>
using namespace std;

int main(){
	int n;
    cin >> n;
	int m;
	m = n%4;
	
	switch(m){
		case 0:
			cout << "Y";
			break;
		default:
			cout << "N";
			break;
	} 
	return 0;
}
