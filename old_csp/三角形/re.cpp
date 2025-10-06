#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a-b<c&&a-c<b&&a+b>c&&a+c>b){
		cout << "yes";
	}else{
		cout << "no";
	}
	
	return 0;
} 
