#include<iostream>
using namespace std;

int main(){
	int a,b,res;
	char x;
	cin >> a >> b;
	cin >> x;
	if(x=='+'||x=='-'||x=='*'||x == '/'){
		switch(x){
			case '+':
				res = a+b;
				cout << res;
				break;
			case '-':
				res = a-b;
				cout << res;
				break;
			case '*':
				res = a*b;
				cout <<res;
				break;
			case '/':
				res = a/b;
				cout << res;
				break;
		}
	}else{
		cout << "erro"<<endl; 
	}
	
	return 0;
} 
